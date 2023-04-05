/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:20:15 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/05 23:38:03 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

struct	s_used_vars {
	int		range_min;
	int		range_max;
	int		end;
	char	**arr;
} var;

void	check_if_rand_big(void)
{
	var.range_min = 0;
	var.range_max = 38;
	var.end = count_length_stack_a() - 1;
	var.arr = bubble_sort();
	if (var.range_max > var.end)
	{
		var.range_max = var.end;
	}
}

void	check_if_the_min_are_in_bototm(void)
{
	check_if_rand_big();
	while (s_args.stack_a[count_length_stack_a() - 1] && \
		ft_atoi(s_args.stack_a[count_length_stack_a() - 1]) <= \
		ft_atoi(var.arr[var.range_max]))
	{
		bottom_number_go_to_up_and_push_down_by_one();
	}
}

void	check_index_belong_to_range(void)
{
	if (var.arr[var.range_max] && \
		ft_atoi(s_args.stack_a[0]) >= ft_atoi(var.arr[var.range_min]) && \
		ft_atoi(s_args.stack_a[0]) <= ft_atoi(var.arr[var.range_max]))
	{
		send_top_of_a_to_top_of_b();
		if (var.range_max < var.end)
		{
			var.range_max++;
			var.range_min++;
		}
	}
}

void	sort_big(void)
{
	check_if_the_min_are_in_bototm();
	while (count_length_stack_a() - 1)
	{
		check_index_belong_to_range();
		if (ft_atoi(s_args.stack_a[0]) < ft_atoi(var.arr[var.range_min]))
		{
			send_top_of_a_to_top_of_b();
			top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
			if (var.range_max < var.end)
			{
				var.range_max++;
				var.range_min++;
			}
		}
		if (var.arr[var.range_max] && \
			ft_atoi(s_args.stack_a[0]) > ft_atoi(var.arr[var.range_max]))
		{
			top_nbr_go_to_bottom_and_shift_up_by_one();
		}
	}
	if (s_args.stack_a[0])
		send_top_of_a_to_top_of_b();
	sorting_from_stack_b();
}
