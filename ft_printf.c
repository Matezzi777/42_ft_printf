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

int	ft_printf(const char *format, ...)
{
	int		written_chars;
	va_list	ap;

	va_start(ap, format);
	written_chars = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			written_chars += print_argument(*(format++), ap);
		else
			written_chars += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (written_chars);
}

int	print_argument(char flag, va_list ap)
{
	int	written_chars;

	written_chars = 0;
	if (flag == 'c')
		written_chars += ft_print_character(va_arg(ap, int));
	else if (flag == 's')
		written_chars += ft_print_string(va_arg(ap, char *));
	else if (flag == 'p')
		written_chars += ft_print_pointer(va_args(ap, unsigned long long));
	else if (flag == 'd' || flag == 'i')
		written_chars += ft_print_number(va_arg(ap, int));
	else if (flag == 'u')
		written_chars += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (flag == 'x' || flag == 'X')
		written_chars += ft_print_hexadecimal(va_arg(ap, unsigned int), flag);
	else if (flag == '%')
		written_chars += ft_print_character('%');
	return (written_chars);
}

// #include <stdio.h>

// int	main(void)
// {
	
// }