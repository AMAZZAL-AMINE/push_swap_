# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 22:34:51 by mamazzal          #+#    #+#              #
#    Updated: 2023/04/14 01:56:34 by mamazzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c all_args_in_one.c count_lenght_of_array.c free_all.c \
	ft_atoi.c ft_putstr.c max_nbr_and_min_nbr.c max_nbr_and_min_nbr_stack_b.c \
	sort_args.c actions/actions_stack_a.c actions/actions_stack_b.c \
	actions/both_action_in_one.c handle_error/check_empty_argments.c \
	handle_error/check_if_already_sorted.c handle_error/check_valid_numbers.c \
	handle_error/chek_duplicate_numbers.c handle_error/error_msg.c \
	sort/bubble_sort.c sort/sort_big.c sort/sort_five.c sort/sort_from_stack_b.c \
	sort/sort_one_hundred.c sort/sort_three.c

OBJ =  push_swap.o all_args_in_one.o count_lenght_of_array.o free_all.o \
	ft_atoi.o ft_putstr.o max_nbr_and_min_nbr.o max_nbr_and_min_nbr_stack_b.o \
	sort_args.o actions/actions_stack_a.o actions/actions_stack_b.o \
	actions/both_action_in_one.o handle_error/check_empty_argments.o \
	handle_error/check_if_already_sorted.o handle_error/check_valid_numbers.o \
	handle_error/chek_duplicate_numbers.o handle_error/error_msg.o \
	sort/bubble_sort.o sort/sort_big.o sort/sort_five.o sort/sort_from_stack_b.o \
	sort/sort_one_hundred.o sort/sort_three.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all 