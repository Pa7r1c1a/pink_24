NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

SRCDIR = srcs
INCDIR = includes

SRCS =	$(SRCDIR)/ft_putchar.c \
	$(SRCDIR)/ft_putstr.c \
	$(SRCDIR)/ft_strcmp.c \
	$(SRCDIR)/ft_strlen.c \
	$(SRCDIR)/ft_swap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(INCDIR)/libft.h
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
