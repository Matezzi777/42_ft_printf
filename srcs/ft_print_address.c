/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:57:40 by maxmart2          #+#    #+#             */
/*   Updated: 2025/05/22 13:55:12 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_bool	ft_put_addr(uintptr_t addr)
{
	char	*format;

	format = "0123456789abcdef";
	if (addr <= 15)
		return (write(1, &format[addr], 1) != -1);
	else
	{
		if (!ft_put_addr(addr / 16))
			return (FALSE);
		if (!ft_put_addr(addr % 16))
			return (FALSE);
		return (TRUE);
	}
}

int	ft_print_address(void *addr)
{
	int			written;
	uintptr_t	ptr_converted;

	if (addr == NULL)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	ptr_converted = (uintptr_t)addr;
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (!ft_put_addr(ptr_converted))
		return (-1);
	written = 2;
	while (ptr_converted)
	{
		written++;
		ptr_converted /= 16;
	}
	return (written);
}
