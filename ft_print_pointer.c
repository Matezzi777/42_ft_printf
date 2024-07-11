/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <mmartina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:17:42 by mmartina          #+#    #+#             */
/*   Updated: 2024/03/13 18:17:45 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *pointer);

int	ft_print_pointer(void *pointer)
{
	int	written_chars;
	int	adress_hexa;

	if (!pointer)
	{
		if (ft_print_string("(nil)") == -1)
			return (-1);
		else
			return (5);
	}
	if (ft_print_string("0x") == -1)
		return (-1);
	written_chars = 2;
	adress_hexa = ft_print_hexadecimal((unsigned long)pointer, 'x');
	if (adress_hexa == -1)
		return (-1);
	written_chars += adress_hexa;
	return (written_chars);
}
