# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 07:58:50 by yzaytoun          #+#    #+#              #
#    Updated: 2022/06/01 13:53:10 by yzaytoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDE = include/

SRC = ft_bzero.c ft_hex.c ft_isdigit.c ft_putchar.c	ft_strlen.c \
	  ft_calloc.c ft_isalnum.c ft_isflag.c ft_putnbr.c \
	  ft_isalpha.c ft_printf.c ft_putstr.c ft_format.c

BONUS = ft_check_flag_bonus.c ft_hex_bonus.c ft_count_digit_bonus.c \
		ft_isformat_bonus.c ft_flag_0_bonus.c ft_putchar_bonus.c \
		ft_flag_combination_bonus.c	ft_putnbr_bonus.c \
		ft_flag_precision_bonus.c ft_putstr_bonus.c ft_flag_space_bonus.c \
		ft_reset_flag_bonus.c ft_format_bonus.c ft_unsigned_putnbr_bonus.c \
		ft_isunsigned_bonus.c ft_get_precision_num_bonus.c \
		ft_zero_condition_bonus.c ft_printf_bonus.c

SRC_DIR =	src

BONUS_DIR =	bonus

CC = gcc
RM = rm -f
AR = ar rcs
FLAG = -Wall -Werror -Wextra -I $(INCLUDE) -g3
B = .

OBJ = $(addprefix $(SRC_DIR)/, $(SRC:.c=.o))

OBJ_BONUS = $(addprefix $(BONUS_DIR)/, $(BONUS:.c=.o))

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(FLAG) -c $< -o $@

$(BONUS_DIR)/%.o: $(BONUS_DIR)/%.c
	$(CC) $(FLAG) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(B)

$(B): $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)
	@ar -d $(NAME) ft_printf.o

test:
	@make re
	@make bonus

main:
	@echo "Done"
	@$(CC) main.c libftprintf.a

fclean: clean
	/bin/$(RM) $(NAME)

clean:
	/bin/$(RM) $(OBJ) $(OBJ_BONUS)

re: fclean all

.PHONY: bonus all clean fclean re
