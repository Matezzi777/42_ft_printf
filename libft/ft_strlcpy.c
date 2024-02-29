/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:25:04 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/18 10:49:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	len_src;
	unsigned int	i;

	len_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len_src);
	while (src[i] && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char		dest[] = "Blabliblo";
// 	const char	src[] = "Hola mundo";

// 	printf("This is FT before: %s\n", dest);
// 	ft_strlcpy(dest, src, 5);
// 	printf("This is FT: %s\n", dest);
// 	printf("This is FT: %ld\n", ft_strlcpy(dest, src, 5));
// 	return (0);
// }