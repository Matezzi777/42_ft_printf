/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:15:30 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 15:15:33 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = s;
	i = 0;
	while (i < n)
	{
		*a = '\0';
		a++;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	buff[10] ="-hello all";
// 	int	i;

// 	printf("the word before bzero is %s\n", buff);
// 	ft_bzero(&buff, 5);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("the word  afetr bzero is %d\n", buff[i] );
// 		i++;
// 	}

// 	return (0);
// }