/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:19:27 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 15:19:30 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)src;
	b = dest;
	i = 0;
	while (i < n)
	{
		*b = *a;
		a++;
		b++;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
// 	char	source[]="1234567890";
// 	char	dest_a[10]="Hola Mundo";
// 	char	src[] = "1234567890";
// 	char	dst[10] = "Hola Mundo";

// 	printf("This is the destina FT before: %s\n", dest_a);
// 	ft_memcpy(dest_a, source, sizeof(src)-1);
// 	printf("I'm destination FT after: %s\n", dest_a);
// 	printf("this is dst C: %s\n", dst);
// 	memcpy(dst, src, sizeof(src)-1);
// 	printf("this is dst C After: %s\n", dst);
// 	return (0);
// }