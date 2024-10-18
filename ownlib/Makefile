NAME = ownlib.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

SRCS = own_isalpha.c \
	own_isdigit.c \
	own_isalnum.c \
	own_isascii.c \
	own_isprint.c \
	own_strlen.c \
	own_memset.c \
	own_bzero.c \
	own_memcpy.c \
	own_memmove.c \
	own_strlcpy.c \
	own_strlcat.c \
	own_toupper.c \
	own_tolower.c \
	own_strchr.c \
	own_strrchr.c \
	own_strncmp.c \
	own_memcmp.c \
	own_memchr.c \
	own_strnstr.c \
	own_atoi.c \
	own_calloc.c \
	own_strdup.c \
	own_strndup.c \
	own_substr.c \
	own_strjoin.c \
	own_strtrim.c \
	own_split.c \
	own_revstr.c \
	own_itoa.c \
	own_strmapi.c \
	own_striteri.c \
	own_putchar_fd.c \
	own_putstr_fd.c \
	own_putendl_fd.c \
	own_putnbr_fd.c

INCLUDES = ownlib.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
