/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:57:35 by maxmart2          #+#    #+#             */
/*   Updated: 2025/05/22 13:42:48 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_bool	ft_put_hexa(unsigned int n, t_bool maj)
{
	char	*format;

	if (maj)
		format = "0123456789ABCDEF";
	else
		format = "0123456789abcdef";
	if (n <= 15)
	{
		if (write(1, &format[n], 1) == -1)
			return (FALSE);
		return (TRUE);
	}
	else
	{
		if (!ft_put_hexa(n / 16, maj))
			return (FALSE);
		if (!ft_put_hexa(n % 16, maj))
			return (FALSE);
		return (TRUE);
	}
}

int	ft_print_hexa(unsigned int n, t_bool maj)
{
	int	written;

	if (!ft_put_hexa(n, maj))
		return (-1);
	written = 1;
	while (n / 16)
	{
		written++;
		n /= 16;
	}
	return (written);
}
