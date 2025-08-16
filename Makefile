############################## VARIABLES ##############################
##### COMMANDS #####
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rdf

################################ FILES ################################
NAME = libftprintf.a
SRC_DIR = srcs
RAW_SRCS = ft_print_address.c \
		ft_print_character.c \
		ft_print_hexa.c \
		ft_print_integer.c \
		ft_print_string.c \
		ft_print_unsigned.c \
		ft_printf.c

SRCS = $(addprefix $(SRC_DIR)/, $(RAW_SRCS))
OBJS = $(SRCS:.c=.o)

################################ RULES ################################
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

re: fclean all

.PHONY: all fclean clean re