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

int	ft_print_number(long number);

int	ft_print_number(long number)
{
	long	char_num;
	int		written_chars;
	int		follow;

	written_chars = 0;
	if (number < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		written_chars += 1;
		number *= -1;
	}
	char_num = number % 10 + '0';
	if (number > 9)
	{
		follow = ft_print_number(number / 10);
		if (follow == -1)
			return (-1);
		written_chars += follow;
	}
	if (write(1, &char_num, 1) == -1)
		return (-1);
	written_chars += 1;
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