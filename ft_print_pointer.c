/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 08:01:48 by marvin            #+#    #+#             */
/*   Updated: 2024/02/07 08:01:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long pointer);

int	ft_print_pointer(unsigned long long pointer)
{
	int	written_chars;
	int	adress_hexa;

	if (ft_print_string("0x" == -1))
		return (-1);
	written_chars = 2;
	adress_hexa = ft_print_hexadecimal((unsigned long)pointer, 'x');
	if (adress_hexa == -1)
		return (-1);
	written_chars += adress_hexa;
	return (written_chars);
}