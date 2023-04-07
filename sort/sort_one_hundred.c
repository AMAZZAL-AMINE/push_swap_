/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_one_hundred.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:06:23 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/06 23:23:14 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

struct	s_used_vars {
	int		range_min;
	int		range_max;
	int		end;
	char	**arr;
} var;

void	set_value_for_vars(void)
{
	int	size;

	var.range_min = 0;
	var.range_max = 15;
	var.end = count_length_stack_a() - 1;
	var.arr = bubble_sort();
	size = count_length_stack_a() - 1;
	if (var.range_max > var.end)
		var.range_max = var.end;
	while (size && \
		ft_atoi(s_args.stack_a[size]) <= \
		ft_atoi(var.arr[size]))
	{
		bottom_number_go_to_up_and_push_down_by_one();
		size--;
	}
}

void	check_first_index_belong_to_range(void)
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

void	sort_one_hundred_nbrs(void)
{
	set_value_for_vars();
	while (count_length_stack_a() - 1)
	{
		check_first_index_belong_to_range();
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
