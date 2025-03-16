NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
HEADER = libft.h
SRC_DIR = src
OBJ_DIR = obj

# Manually list all source files
SRC = $(SRC_DIR)/ft_atoi.c \
      $(SRC_DIR)/ft_bzero.c \
      $(SRC_DIR)/ft_calloc.c \
      $(SRC_DIR)/ft_isalnum.c \
      $(SRC_DIR)/ft_isalpha.c \
      $(SRC_DIR)/ft_isascii.c \
      $(SRC_DIR)/ft_isdigit.c \
      $(SRC_DIR)/ft_isprint.c \
      $(SRC_DIR)/ft_memcmp.c \
      $(SRC_DIR)/ft_memchr.c \
      $(SRC_DIR)/ft_memcpy.c \
      $(SRC_DIR)/ft_memmove.c \
      $(SRC_DIR)/ft_memset.c \
      $(SRC_DIR)/ft_strchr.c \
      $(SRC_DIR)/ft_strdup.c \
      $(SRC_DIR)/ft_strlcat.c \
      $(SRC_DIR)/ft_strlcpy.c \
      $(SRC_DIR)/ft_strlen.c \
      $(SRC_DIR)/ft_strncmp.c \
      $(SRC_DIR)/ft_strnstr.c \
      $(SRC_DIR)/ft_strrchr.c \
      $(SRC_DIR)/ft_tolower.c \
      $(SRC_DIR)/ft_toupper.c \
      $(SRC_DIR)/ft_substr.c \
      $(SRC_DIR)/ft_putchar_fd.c \
      $(SRC_DIR)/ft_putendl_fd.c \
      $(SRC_DIR)/ft_putnbr_fd.c \
      $(SRC_DIR)/ft_putstr_fd.c \
      $(SRC_DIR)/ft_strjoin.c \
      $(SRC_DIR)/ft_itoa.c \
      $(SRC_DIR)/ft_strtrim.c \
      $(SRC_DIR)/ft_striteri.c \
      $(SRC_DIR)/ft_strmapi.c \
      $(SRC_DIR)/ft_split.c \
      $(SRC_DIR)/ft_strcmp2.c \
      $(SRC_DIR)/ft_strjoin3.c \
      $(SRC_DIR)/ft_strcpy.c \
      $(SRC_DIR)/ft_strlcpy2.c \
      $(SRC_DIR)/ft_strcat.c

SRCB = $(SRC_DIR)/ft_lstnew.c \
       $(SRC_DIR)/ft_lstadd_front.c \
       $(SRC_DIR)/ft_lstsize.c \
       $(SRC_DIR)/ft_lstlast.c \
       $(SRC_DIR)/ft_lstadd_back.c \
       $(SRC_DIR)/ft_lstdelone.c \
       $(SRC_DIR)/ft_lstclear.c \
       $(SRC_DIR)/ft_lstiter.c \
       $(SRC_DIR)/ft_lstmap.c

# Create object file names by replacing .c with .o, while keeping just the file name, not the full path
OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))
OBJSB = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCB:.c=.o)))

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# Rule to create object files from source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	@mkdir -p $(OBJ_DIR)  # Ensure the obj directory exists
	$(CC) $(CFLAGS) $(INCL) -c $< -o $@

bonus: $(OBJS) $(OBJSB)
	ar -rcs $(NAME) $(OBJS) $(OBJSB)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
