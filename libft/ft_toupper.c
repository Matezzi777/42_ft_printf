/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:28:14 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 15:28:15 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char lowercase = 'q';
// 	char uppercase = ft_toupper(lowercase);
// 	printf("%c\n", uppercase);
// 	return (0);
// }