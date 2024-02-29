/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:55:30 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/19 20:58:08 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*found;

	found = NULL;
	while (*s)
	{
		if (*s == (char)c)
			found = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)found);
}
