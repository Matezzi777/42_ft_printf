/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:27:18 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 15:27:22 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//OK
static int	is_c_in_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	int		i;
	char	*trimmed;

	start = 0;
	while (s1[start] && is_c_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while ((end > start) && is_c_in_set(s1[end - 1], set))
		end--;
	trimmed = (char *)malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s1;
// 	const char	*set;
// 	char		*trimmed;

// 	s1 = "XXXXXABCXXXCBAXXXXX";
// 	set = "X";
// 	trimmed = ft_strtrim(s1, set);
// 	printf("The trimmed: %s\n", trimmed);
// 	free(trimmed);
// 	return (0);
// }