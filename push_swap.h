/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:21:32 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/14 16:10:55 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

struct s_args_info
{
	int		*stack_a;
	int		*stack_b;
	int		*fake_args;
	int		count_actions;
	int		arr_size;
	int		arrb_size;
	int		fake_size;
} s_args;
int		*get_all_args(char *arg);
void	sort_args_using_only_actions(void);
void	swap_a(void);
void	top_nbr_go_to_bottom_and_shift_up_by_one(void);
void	bottom_number_go_to_up_and_push_down_by_one(void);
void	send_top_of_a_to_top_of_b(void);
void	swap_b(void);
void	send_top_of_b_to_top_of_a(void);
void	top_nbr_go_to_bottom_and_shift_up_by_one_stack_b(void);
void	bottom_number_go_to_up_and_push_down_by_one_stack_b(void);
void	run_sa_and_sb_at_same_time(void);
void	run_ra_and_rb_at_ame_time(void);
void	run_rra_and_rrb_at_same_time(void);
int		find_min_nbr(void);
int		find_the_max_nbr(void);
int		find_min_nbr_stack_b(void);
int		find_the_max_nbr_stack_b(void);
long	ft_atoi(char *str);
int		count_length_stack_a(void);
int		count_length_stack_b(void);
void	sort_five_args(void);
void	sort_three_args(void);
void	sort_one_hundred_nbrs(void);
void	sort_big(void);
void	sorting_from_stack_b(void);
int		*bubble_sort(void);
void	check_duplaicate_nbrs(char *arg);
void	check_valid_numbers(char **argv, char *arg);
void	check_if_already_sorted(char *args);
void	ft_putstr(char *str);
void	check_empty_args(char **args, char *arg);
int		count_numbers_in_args(char *arg);
char	*get_tal_space(char *str);
int		count_items_in_argv(char **av);
char	*set_argv_in_one_array(char **av);
void	free_all(void);
void	error_msg(char *arg);
void	error_msg_two(char *arg);

#endif