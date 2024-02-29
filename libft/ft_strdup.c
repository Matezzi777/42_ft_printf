/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:23:55 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 15:23:56 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		length_source;
	char	*copy;
	int		i;

	length_source = ft_strlen(source);
	copy = malloc((length_source + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (source[i])
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *orig;
// 	char *dupli;

// 	orig = "'Hola Mundo ----'";
// 	dupli = ft_strdup(orig);
// 	printf("Original : %s\nCopie : %s\n", orig, dupli);
// 	free(dupli);
// 	return (0);
// }