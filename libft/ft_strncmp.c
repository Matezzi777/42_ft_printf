/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <mmartina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:26:08 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 18:21:45 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	if (s1[0] != s2[0])
		return (s1[0] - s2[0]);
	i = 1;
	while ((i < n) && (s1[i - 1]) && (s2[i - 1]) && (i != 0))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "\0";
// 	char	str2[] = "HELlo";

// 	printf("This is FT: %d\n", ft_strncmp(str1, str2, 3));
// 	printf("This is C : %d\n", strncmp(str1, str2, 3));
// 	return (0);
// }