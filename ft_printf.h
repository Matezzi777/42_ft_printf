#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> //fonction variadique
# include <unistd.h> //write()

int	ft_printf(const char *format, ...);
int	ft_print_character(int c);
int	ft_print_hexadecimal(unsigned long n, char flag);
int	ft_print_number(long number);
int	ft_print_pointer(void *pointer);
int	ft_print_string(char *string);

#endif