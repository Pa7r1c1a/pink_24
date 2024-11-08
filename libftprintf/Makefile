NAME = libftprintf.a

CC = cc
INCLUDES = include
CFLAGS = -Wall -Wextra -Werror -g

AR = ar
ARFLAGS = rcs
RM = rm -f

SRC_DIR = src
BONUS_SRC_DIR = src_bonus
LIBFT_DIR = libft

SRCS = $(SRC_DIR)/ft_printf.c \
	   $(SRC_DIR)/pprint_and_return.c \
	   $(SRC_DIR)/print_char.c \
	   $(SRC_DIR)/print_hex.c \
	   $(SRC_DIR)/print_integer.c \
	   $(SRC_DIR)/print_pointer.c \
	   $(SRC_DIR)/print_string.c \
	   $(SRC_DIR)/print_unsigned.c \
	   $(SRC_DIR)/printf_print.c

BONUS_SRCS = $(BONUS_SRC_DIR)/parse_flags_bonus.c \
		$(BONUS_SRC_DIR)/parse_precision_bonus.c \
		$(BONUS_SRC_DIR)/parse_width_bonus.c \
		$(BONUS_SRC_DIR)/set_additional_flags_bonus.c \
		$(BONUS_SRC_DIR)/set_justify_and_padding_bonus.c \
		$(BONUS_SRC_DIR)/print_char_bonus.c \
		$(BONUS_SRC_DIR)/print_string_bonus.c \
		$(BONUS_SRC_DIR)/print_integer_bonus.c \
		$(BONUS_SRC_DIR)/print_unsigned_bonus.c \
		$(BONUS_SRC_DIR)/print_hex_bonus.c \
		$(BONUS_SRC_DIR)/print_pointer_bonus.c \
		$(BONUS_SRC_DIR)/ft_printf_bonus.c \
		$(BONUS_SRC_DIR)/printf_print_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# ############## RULES ############## #

all: $(NAME)

# Build the library
$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a $(NAME)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDE) -I$(LIBFT_DIR) -c $< -o $@

# Compile libft if not already compiled
$(LIBFT_DIR)/libft.a:
	@$(MAKE) -C $(LIBFT_DIR)

# Bonus Rule
bonus: $(BONUS_OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a $(NAME)
	@$(AR) $(ARFLAGS) $(NAME) $(BONUS_OBJS)

test: $(NAME)
	@$(CC) $(CFLAGS) main.c -L. -l:libftprintf.a -L$(LIBFT_DIR) -l:libft.a -o test

run: test
	@./test

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean bonus fclean re test run
