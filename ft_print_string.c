/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 08:03:16 by marvin            #+#    #+#             */
/*   Updated: 2024/02/07 08:03:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *string);

int	ft_print_string(char *string)
{
	int	written_chars;

	if (!string)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	written_chars = 0;
	while (*string)
	{
		if (write(1, string, 1) == -1)
			return (-1);
		written_chars++;
		string++;
	}
	return (written_chars);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	int	written_chars;
// 	if (argc != 2)
// 		printf("Invalid number of arguments.\n");
// 	else
// 	{
// 		printf("\nPerso :\n");
// 		written_chars = ft_print_string(argv[1]);
// 		printf(" - %d\n\nprintf :\n", written_chars);
// 		written_chars = printf("%s", argv[1]);
// 		printf(" - %d\n\n", written_chars);
// 	}
// }