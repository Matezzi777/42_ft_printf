/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:30:01 by maxmart2          #+#    #+#             */
/*   Updated: 2025/05/22 13:52:49 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//Libraries
# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>
# include <unistd.h>

//Types
typedef enum e_bool
{
	FALSE,
	TRUE
}				t_bool;

//Functions
int		ft_printf(const char *format, ...);
int		ft_print_character(int c); //ok
int		ft_print_string(char *str); //ok
int		ft_print_hexa(unsigned int nbr, t_bool maj); //ok
int		ft_print_integer(int nbr); //ok
int		ft_print_unsigned(unsigned int nbr); //ok
int		ft_print_address(void *addr); //

#endif