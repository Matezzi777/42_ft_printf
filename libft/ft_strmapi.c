/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:25:40 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 15:25:49 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>

// static char	ft_upper(unsigned int i, char c)
// {
// 	if ((c >= 'a' && c <= 'z') && i > 0)
// 		return (c - 32);
// 	else
// 		return (c);
// }

// int	main()
// {
// 	const char	*str;
// 	str = "Hola, Mundo!";
// 	str = ft_strmapi(str, ft_upper);
// 	printf("main: %s\n", str);
// 	return (0);
// }