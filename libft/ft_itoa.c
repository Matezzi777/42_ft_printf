/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartina <mmartina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:18:16 by mmartina          #+#    #+#             */
/*   Updated: 2024/01/17 17:27:46 by mmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//OK
static int	absolute(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

//OK (inclus le \0)
static int	size_to_malloc(int n)
{
	int	i;

	i = 2;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

//OK
char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*result;

	len = size_to_malloc(n);
	i = len - 2;
	result = (char *)malloc(len * sizeof(char));
	if (!result)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	while (n != 0)
	{
		result[i] = absolute(n % 10) + '0';
		i--;
		n = n / 10;
	}
	result[len - 1] = '\0';
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	test1 = 0;
// 	int	test2 = 42;
// 	int	test3 = -42;
// 	int	test4 = 2147483647;
// 	int	test5 = -2147483648;
// 	printf("%d : %s\n", test1, ft_itoa(test1));
// 	printf("%d : %s\n", test2, ft_itoa(test2));
// 	printf("%d : %s\n", test3, ft_itoa(test3));
// 	printf("%d : %s\n", test4, ft_itoa(test4));
// 	printf("%d : %s\n", test5, ft_itoa(test5));
// }