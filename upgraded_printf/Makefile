NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra -I incl
HEADER = ft_printf.h
SRC = \
    ft_printf.c \
	ft_print.c \
	ft_pointer.c \

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) ${HEADER}
	ar -rcs ${NAME} ${OBJS}
clean:
	-rm -f $(OBJS) 
fclean: clean
	-rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re 
