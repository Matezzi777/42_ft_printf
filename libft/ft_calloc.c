/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:54:17 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/19 20:57:42 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated_memory;

	if ((nmemb >= 42949672926 || size >= 42949672926) && nmemb && size)
		return (NULL);
	allocated_memory = (void *)malloc(nmemb * size);
	if (allocated_memory == NULL)
		return (NULL);
	ft_bzero(allocated_memory, nmemb * size);
	return (allocated_memory);
}
