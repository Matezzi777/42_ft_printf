/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:24:14 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 15:24:15 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// static void my_function(unsigned int i, char *c)
// {
// 	if (*(c + i) || *c)
// 		*c += 32 + 1;
// }

// int	main(void)
// {
// 	char	str[] = "ABCDEFGH";

// 	ft_striteri(str, my_function);
// 	printf("__%s__\n",str);
// 	return (0);
// }