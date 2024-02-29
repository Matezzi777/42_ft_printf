/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 07:59:40 by marvin            #+#    #+#             */
/*   Updated: 2024/02/07 07:59:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int number);

int	ft_print_number(int number)
{
	int	written_chars;

	written_chars = 0;
	ft_putnbr_fd(number, 1);
	if (number == 0)
		return (1);
	if (number < 0)
		written_chars++;
	while (number != 0)
	{
		number = number / 10;
		written_chars++;
	}
	return (written_chars);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	int	written_chars = 0;
// 	if (argc != 2)
// 		printf("Number of arguments invalid.\n");
// 	else
// 	{
// 		written_chars = ft_print_number(ft_atoi(argv[1]));
// 		printf("\nNumber : %d - %i\nWritten chars = %d\n", ft_atoi(argv[1]), ft_atoi(argv[1]), written_chars);
// 	}
// }