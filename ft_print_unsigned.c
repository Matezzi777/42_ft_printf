/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 08:04:34 by marvin            #+#    #+#             */
/*   Updated: 2024/02/07 08:04:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_print_unsigned(unsigned int number);

// int	ft_print_unsigned(unsigned int number)
// {
	
// }

#include <stdio.h>

int	main(void)
{
	unsigned int	test1 = 0;
	unsigned int	test2 = -42;
	unsigned int	test3 = 42;
	unsigned int	test4 = -2147483648;
	unsigned int	test5 = 2147483647;
	unsigned int	test6 = 4294967295;

	printf("\nprintf %%u :\n");
	printf("%u\n", test1);
	printf("%u\n", test2);
	printf("%u\n", test3);
	printf("%u\n", test4);
	printf("%u\n", test5);
	printf("%u\n\nFunction perso. %%u :\n", test6);
	ft_print_unsigned(test1);
	printf("\n");
	ft_print_unsigned(test2);
	printf("\n");
	ft_print_unsigned(test3);
	printf("\n");
	ft_print_unsigned(test4);
	printf("\n");
	ft_print_unsigned(test5);
	printf("\n");
	ft_print_unsigned(test6);
	printf("\n");
}