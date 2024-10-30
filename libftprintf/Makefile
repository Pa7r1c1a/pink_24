NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g $(INCLUDES)

AR = ar rcs
RM = rm -f

SRC_DIR = src
BONUS_SRC_DIR = src_bonus
INC_DIR = include
LIBFT_DIR = libft

INCLUDES = -I$(INC_DIR) -I$(LIBFT_DIR)

SRCS =	$(SRC_DIR)/ft_printf.c \
	$(SRC_DIR)/parse_flags.c \
	$(SRC_DIR)/pprint_and_return.c \
	$(SRC_DIR)/print_char.c \
	$(SRC_DIR)/print_hex.c \
	$(SRC_DIR)/print_integer.c \
	$(SRC_DIR)/print_pointer.c \
	$(SRC_DIR)/print_string.c \
	$(SRC_DIR)/print_unsigned.c \
	$(SRC_DIR)/printf_print.c

BONUS_SRCS = $(BONUS_SRC_DIR)/print_int_bonus.c \
		$(BONUS_SRC_DIR)/print_hex_bonus.c \
		$(BONUS_SRC_DIR)/parse_flags_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# ############## RULES ############## #

all: $(NAME)

# Build the library
$(NAME): $(OBJS) $(LIBFT_DIR)/libft.a
	@echo "Building $(NAME)..."
	@$(AR) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Compile libft if not already compiled
$(LIBFT_DIR)/libft.a:
	@$(MAKE) -C $(LIBFT_DIR)

# Bonus Rule
bonus: $(BONUS_OBJS) $(LIBFT_DIR)/libft.a
	@$(AR) $(NAME) $(BONUS_OBJS)

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

rocket:
	@echo "Preparing rocket for launch..."
	@sleep 1
	@echo "\r        _"
	@sleep 0.2
	@echo "\r       /^\\"
	@sleep 0.2
	@echo "\r      |   |"
	@sleep 0.2
	@echo "\r      |   |"
	@sleep 0.2
	@echo "\r     /_____\\"
	@sleep 0.2
	@echo "\r    /       \\"
	@sleep 0.2
	@echo "\r   /_________\\"
	@sleep 0.2
	@echo "\r    |       |"
	@sleep 0.2
	@echo "\r    |       |"
	@sleep 0.2
	@echo "\r    |_______|"
	@sleep 0.2
	@echo "\r   /_________\\"
	@sleep 0.2
	@echo "\r  /___________\\"
	@sleep 0.5
	@echo "\r   |       |    "
	@sleep 0.1
	@echo "\r   |       |    "
	@sleep 0.1
	@echo "\rRocket launch successful! 🚀"
	@echo "\rBuilding project..."

.PHONY: all clean bonus fclean re rocket
