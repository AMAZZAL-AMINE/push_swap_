/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_one_hundred.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:06:23 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/11 16:40:10 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

struct	s_used_vars {
	int		range_min;
	int		range_max;
	int		end;
	int		*arr;
} var;

void	set_value_for_vars(void)
{
	int	size;
	int	count;

	count = 0;
	var.range_min = 0;
	var.range_max = 15;
	var.end = s_args.arr_size - 1;
	var.arr = bubble_sort();
	size = s_args.arr_size - 1;
	if (var.range_max > var.end)
		var.range_max = var.end;
	while (count < size && \
		s_args.stack_a[size] <= var.arr[var.range_max] && \
		s_args.stack_a[size] >= var.arr[var.range_min])
	{
		bottom_number_go_to_up_and_push_down_by_one();
		count++;
	}
}

void	check_first_index_belong_to_range(void)
{
	if (s_args.stack_a[0] >= var.arr[var.range_min] && \
		s_args.stack_a[0] <= var.arr[var.range_max])
	{
		send_top_of_a_to_top_of_b();
		if (var.range_max < var.end)
		{
			var.range_max++;
			var.range_min++;
		}
	}
}

void	sort_one_hundred_nbrs(void)
{
	set_value_for_vars();
	while (s_args.arr_size - 1)
	{
		if (s_args.stack_a[0] < var.arr[var.range_min])
		{
			send_top_of_a_to_top_of_b();
			top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
			if (var.range_max < var.end)
			{
				var.range_max++;
				var.range_min++;
			}
		}
		else if (var.range_max < s_args.fake_size && \
			s_args.stack_a[0] > var.arr[var.range_max])
		{
			top_nbr_go_to_bottom_and_shift_up_by_one();
		}
		else
			check_first_index_belong_to_range();
	}
	if (s_args.arr_size)
		send_top_of_a_to_top_of_b();
	sorting_from_stack_b();
}
