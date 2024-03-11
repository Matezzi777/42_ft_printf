NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC = 	ft_printf.c \
		ft_print_character.c \
		ft_print_string.c \
		ft_print_number.c \
		ft_print_unsigned.c \
		ft_print_hexa.c \
		ft_print_pointer.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -I./

fclean: clean
	$(RM) *.a

clean:
	$(RM) *.o

re: fclean all