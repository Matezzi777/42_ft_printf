/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:55:50 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/19 20:58:16 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *to_find, size_t len)
{
	size_t	i;

	if (!str && !len)
		return (NULL);
	if (!*to_find)
		return ((char *)str);
	while (*str && len--)
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i] && i <= len)
		{
			if (!to_find[i + 1])
				return ((char *)str);
			i++;
		}
		str++;
	}
	return (NULL);
}
