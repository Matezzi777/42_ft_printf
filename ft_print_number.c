/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <mmartina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 07:59:40 by marvin            #+#    #+#             */
/*   Updated: 2024/03/13 18:17:30 by mmartina         ###   ########.fr       */
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
