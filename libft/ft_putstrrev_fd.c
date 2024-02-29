#include "libft.h"

void	ft_putstrrev_fd(char *s, int fd)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		ft_putchar_fd(s[i-1], fd);
		i--;
	}
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		printf("Invalid number of arguments.\n");
// 	else
// 	{
// 		ft_putstr_fd(argv[1], 1);
// 		ft_putchar_fd('\n', 1);
// 		ft_putstrrev_fd(argv[1], 1);
// 		ft_putchar_fd('\n', 1);
// 	}
// }