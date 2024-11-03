SRCS = srcs/main.c srcs/check_map_params.c srcs/ft_split.c srcs/ft_utils.c srcs/ft_utils2.c srcs/ft_struct_init.c srcs/ft_check_arg.c srcs/ft_identical_params.c srcs/ft_solver.c
OBJ = $(SRCS:.c=.o)
INCS = -I includes
NAME = bsq
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror


all: ${NAME} $(OBJ)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(INCS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
