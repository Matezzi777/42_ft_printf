/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 07:35:40 by marvin            #+#    #+#             */
/*   Updated: 2024/02/07 07:35:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(unsigned int n, char flag);

int	ft_print_hexadecimal(unsigned int n, char flag)
{
	char	*base_hexa;
	int		index;
	char	result[20];

	if (flag == 'x')
		base_hexa = "0123456789abcdef";
	else
		base_hexa = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	index = 0;
	while (n != 0)
	{
		result[index] = base_hexa[n % 16];
		n = n / 16;
		index++;
	}
	result[index] = '\0';
	ft_putstrrev_fd(result, 1);
	return (ft_strlen(result));
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	int	nb_char_printf;
// 	int	written_chars;
// 	if (argc != 2)
// 		printf("Invalid number of arguments.\n");
// 	else
// 	{
// 		ft_putstr_fd("\nNumber : " , 1);
// 		ft_putnbr_fd(ft_atoi(argv[1]), 1);
// 		ft_putstr_fd("\n\nPerso :\n-x : ", 1);
// 		written_chars = ft_print_hexadecimal(ft_atoi(argv[1]), 'x');
// 		ft_putstr_fd(" - ", 1);
// 		ft_putnbr_fd(written_chars, 1);
// 		ft_putstr_fd("\n-X : ", 1);
// 		written_chars = ft_print_hexadecimal(ft_atoi(argv[1]), 'X');
// 		ft_putstr_fd(" - " , 1);
// 		ft_putnbr_fd(written_chars, 1);
// 		printf("\n\n(printf) : \n-x : ");
// 		nb_char_printf = printf("%x", ft_atoi(argv[1]));
// 		printf(" - %d\n-X : ", nb_char_printf);
// 		nb_char_printf = printf("%X", ft_atoi(argv[1]));
// 		printf(" - %d\n\n", nb_char_printf);
// 	}
// }