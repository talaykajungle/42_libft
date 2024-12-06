NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strlcat.c   ft_strnstr.c  libft.h \
ft_atoi.c    ft_isalpha.c  ft_memchr.c   ft_memset.c   ft_strlcopy.c  ft_strrchr.c  \
ft_bzero.c   ft_isascii.c  ft_memcmp.c   ft_strdup.c  ft_strlen.c    ft_tolower.c \
ft_calloc.c  ft_isdigit.c  ft_memcpy.c   ft_strchr.c   ft_strncpy.c   ft_toupper.c \
ft_split.c  ft_strtrim.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library created: $(NAME)"

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Object file cleaned"

fclean:
	@rm -f $(NAME)
	@echo "Library removed"

re: fclean all

.PHONY: all clean fclean re