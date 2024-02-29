/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:53:52 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/19 20:57:29 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else if (*s == c)
			s++;
	}
	return (count);
}

static void	memfree(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
}

static size_t	substr_len(const char *substr, char c)
{
	size_t	i;

	i = 0;
	while (*substr && *substr != c)
	{
		i++;
		substr++;
	}
	return (i);
}

static char	**get_substr(const char *str, char c, char **array, size_t nsub)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < nsub)
	{
		while (str[j] && str[j] == c)
			j++;
		array[i] = ft_substr(str, j, substr_len(&str[j], c));
		if (!array[i])
		{
			memfree(i, array);
			return (NULL);
		}
		while (str[j] && str[j] != c)
			j++;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	num_substr;

	if (!s)
		return (NULL);
	num_substr = num_words(s, c);
	array = (char **)malloc(sizeof(char *) * (num_substr + 1));
	if (!array)
		return (NULL);
	array = get_substr(s, c, array, num_substr);
	return (array);
}
