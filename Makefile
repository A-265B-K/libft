NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
HEADER = libft.h
SRCDIR = src/
OBJDIR = obj/

SRC = \
	$(SRC_LIBFT) \
	$(SRC_PRINTF) \
	$(SRC_PRINTF_FD) \
	$(SRC_GNL)

SRC_LIBFT = \
    ft_atoi.c \
    ft_bzero.c \
    ft_calloc.c \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_memcmp.c \
    ft_memchr.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_memset.c \
    ft_strchr.c \
    ft_strdup.c \
    ft_strlcat.c \
    ft_strlcpy.c \
    ft_strlen.c \
    ft_strncmp.c \
    ft_strnstr.c \
    ft_strrchr.c \
    ft_tolower.c \
    ft_toupper.c \
    ft_substr.c \
    ft_putchar_fd.c \
    ft_putendl_fd.c \
    ft_putnbr_fd.c \
    ft_putstr_fd.c \
    ft_strjoin.c \
    ft_itoa.c \
    ft_strtrim.c \
    ft_striteri.c \
    ft_strmapi.c \
    ft_split.c \
    ft_lstnew.c \
    ft_lstadd_front.c \
    ft_lstsize.c \
    ft_lstlast.c \
    ft_lstadd_back.c \
    ft_lstdelone.c \
    ft_lstclear.c \
    ft_lstiter.c \
    ft_lstmap.c

SRC_PRINTF = \
	ft_pointer.c \
	ft_print.c \
	ft_printf.c

SRC_PRINTF_FD = \
	ft_pointer_fd.c \
	ft_print_fd.c \
	ft_printf_fd.c

SRC_GNL = get_next_line.c \
		  get_next_line_utils.c

OBJS = $(SRC:%.c=$(OBJDIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@echo "Made libft, printf & gnl"

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -Iincl -c $< -o $@

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -Iincl -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Removed libft, printf & gnl .o files"

fclean: clean
	@rm -f $(NAME)
	@echo "Removed libft .a file"

re: fclean all

.PHONY: all clean fclean re
