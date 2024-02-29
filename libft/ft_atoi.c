/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:28:36 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/20 20:28:42 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sign *= -1;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

// #include <stdio.h>

// int	main(int ac, char **av)
// {
// 	int	mine;
// 	int	c;
// 	if (ac == 2)
// 	{
// 		mine = ft_atoi(av[1]);
// 		c = atoi(av[1]);
// 		printf("Main is: %d\n C is: %d\n", mine, c);
// 	}
// 	return (0);
// }
