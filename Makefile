# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: david <david@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 04:53:08 by david             #+#    #+#              #
#    Updated: 2026/01/22 03:09:37 by david            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = push_swap
DIRLIBFT = libft
LIBFT = $(DIRLIBFT)/libft.a
DIRPRINTF = printf
PRINTF = $(DIRPRINTF)/libftprintf.a
SRC = 	src/push_swap.c\
	src/utils.c\
	src/init.c\
	src/free.c\
	src/check_number.c\
	src/good_orders.c\
	commands/swap.c\
	commands/rotate.c\
	commands/re_rotate.c\
	commands/push.c\
	commands/push2.c\
	algo/algo_small.c\
	algo/choose_algo.c\
	algo/algo_big.c\
	algo/algo_small2.c\
	algo/algo_big2.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf

# --------------------------------------------------------
#        BARRE DE PROGRESSION (ROSE) POUR COMPILATION
# --------------------------------------------------------

NB := $(words $(SRC))
BARLEN = 30
CNT = 0

%.o: %.c
	$(eval CNT=$(shell echo $$(($(CNT)+1))))
	$(eval PROG=$(shell echo $$(($(CNT) * 100 / $(NB)))))
	$(eval FILLED=$(shell echo $$(($(PROG) * $(BARLEN) / 100))))
	$(eval EMPTY=$(shell echo $$(($(BARLEN) - $(FILLED)))))
	@printf "\r\033[35m[%s%s] %3s%%\033[0m  \033[90m(%s)\033[0m" \
		"$$(printf '#%.0s' $$(seq 1 $(FILLED)))" \
		"$$(printf '.%.0s' $$(seq 1 $(EMPTY)))" \
		"$(PROG)" "$<"
	@$(CC) $(CFLAGS) -c $< -o $@

# --------------------------------------------------------

all : $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	$(MAKE) -C $(DIRLIBFT) --no-print-directory > /dev/null

$(PRINTF):
	$(MAKE) -C $(DIRPRINTF) --no-print-directory > /dev/null

$(NAME) : $(OBJ)
	$(CC) $(OBJ) $(LIBFT) $(PRINTF) $(CFLAGS) -o $(NAME)

clean :
	$(RM) $(OBJ)
	$(MAKE) -C $(DIRPRINTF) clean --no-print-directory > /dev/null
	$(MAKE) -C $(DIRLIBFT) clean --no-print-directory > /dev/null

fclean : clean
	$(RM) $(NAME)
	$(MAKE) -C $(DIRPRINTF) fclean --no-print-directory > /dev/null
	$(MAKE) -C $(DIRLIBFT) fclean --no-print-directory > /dev/null

re : fclean all

.PHONY : all clean fclean re