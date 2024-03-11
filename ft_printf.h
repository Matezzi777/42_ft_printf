#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> //fonction variadique
# include <stdlib.h> //malloc(), free()
# include <unistd.h> //write()

int	ft_print_character(int c);
int	ft_print_hexadecimal(unsigned int number, char flag);
int	ft_print_number(int number);
int	ft_print_pointer(unsigned long long pointer);
int	ft_print_string(char *string);
int	ft_print_unsigned(unsigned int number);

#endif