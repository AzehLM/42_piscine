SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ = $(SRCS:.c=.o)
INCS = includes
NAME = libft.a
LIBC = ar rc
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I $(INCS)

all : ${NAME}

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


