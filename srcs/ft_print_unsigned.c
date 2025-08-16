/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:57:37 by maxmart2          #+#    #+#             */
/*   Updated: 2025/05/22 13:52:18 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_bool	ft_put_unsigned(unsigned int n)
{
	char	c;

	if (n <= 9)
	{
		c = n + '0';
		return (write(1, &c, 1) != -1);
	}
	else
	{
		if (!ft_put_unsigned(n / 10))
			return (FALSE);
		if (!ft_put_unsigned(n % 10))
			return (FALSE);
		return (TRUE);
	}
}

int	ft_print_unsigned(unsigned int n)
{
	int	written;

	if (!ft_put_unsigned(n))
		return (-1);
	written = 1;
	while (n / 10)
	{
		written++;
		n /= 10;
	}
	return (written);
}
