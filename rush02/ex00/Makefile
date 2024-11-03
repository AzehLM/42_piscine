SRCS = srcs/ft_putstr.c srcs/main.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_check_arg.c srcs/ft_split.c srcs/ft_dict_parser.c srcs/ft_utils.c srcs/ft_print_number.c srcs/ft_printerror.c 
OBJ = $(SRCS:.c=.o)
INCS = -I includes
NAME = rush-02
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(INCS)

clean:
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
