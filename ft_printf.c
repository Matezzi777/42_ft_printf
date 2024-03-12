/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:24:05 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 15:24:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...);
static int	print_argument(char c, va_list arguments);

int	ft_printf(const char *format, ...)
{
	va_list	list_args;
	int		written_chars;
	int		verif;

	va_start(list_args, format);
	written_chars = 0;
	while (*format)
	{
		if (*format == '%')
		{
			verif = print_argument(*(++format), list_args);
			if (verif == -1)
				return (-1);
			written_chars += verif;
		}
		else
		{
			if (write(1, format, 1) == -1)
				return (-1);
			written_chars++;
		}
		format++;
	}
	va_end(list_args);
	return (written_chars);
}

static int	print_argument(const char flag, va_list list_args)
{
	if (flag == 'c')
		return (ft_print_character(va_arg(list_args, int)));
	else if (flag == 's')
		return (ft_print_string(va_arg(list_args, char *)));
	else if (flag == 'p')
		return (ft_print_pointer(va_arg(list_args, void *)));
	else if (flag == 'd' || flag == 'i')
		return (ft_print_number(va_arg(list_args, int)));
	else if (flag == 'u')
		return (ft_print_number(va_arg(list_args, unsigned int)));
	else if (flag == 'x' || flag == 'X')
		return (ft_print_hexadecimal(va_arg(list_args, unsigned int), flag));
	else if (flag == '%')
		return (ft_print_character('%'));
	return (-1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*test_pointer = "Bonjour !";
// 	int		test1 = ft_printf("%c %s %p %d %i %u %x %X %%\n", 'O', "Hello !", test_pointer, -42, -42, -42, 42, 42);
// 	ft_printf("Written chars : %d\n", test1);
// 	int		test_printf = printf("%c %s %p %d %i %u %x %X %%\n", 'O', "Hello !", test_pointer, -42, -42, -42, 42, 42);
// 	printf("Written chars : %d\n", test_printf);
// }