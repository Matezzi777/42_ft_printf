/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:56:10 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/19 20:58:25 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub_str = (char *)malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	ptr = sub_str;
	s += start;
	*(sub_str + len) = '\0';
	while (len-- && *s)
		*sub_str++ = *s++;
	return (ptr);
}
