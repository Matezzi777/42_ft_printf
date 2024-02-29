/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:21:18 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 15:21:20 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*a;

	a = s;
	i = 0;
	while (i < n)
	{
		*a = c;
		a++;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	x[10];
// 	int		i;

// 	printf("%p\n", ft_memset(&x, '0', 10));
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%c\n", x[i]);
// 		i++;
// 	}
// 	return (0);
// }