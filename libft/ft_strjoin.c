/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:24:32 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 15:24:33 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*str;
	int		i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (len_s1 + len_s2))
	{
		str[i] = s2[i - len_s1];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*pref;
// 	const char	*suff;
// 	char		*joined;

// 	pref = "Hola ";
// 	suff = "Que pasa";
// 	joined = ft_strjoin(pref, suff);
// 	printf("Joined: %s\n", joined);
// 	free(joined);
// 	return (0);
// }