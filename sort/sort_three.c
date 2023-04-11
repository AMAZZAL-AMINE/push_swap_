/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:56:37 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/10 16:27:50 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

struct	s_size
{
	int	size;
} s_s;

int	sort_two_arg(void)
{
	if (s_args.arr_size == 2)
	{
		if (s_args.stack_a[0] > s_args.stack_a[1])
		{
			swap_a();
			return (1);
		}
	}
	return (0);
}

void	sort_three_args(void)
{
	s_s.size = s_args.arr_size - 1;
	if (sort_two_arg())
		return ;
	if (s_args.stack_a[1] == find_min_nbr() \
		&& s_args.stack_a[s_s.size] == find_the_max_nbr())
		swap_a();
	if (s_args.stack_a[0] == find_the_max_nbr() \
		&& s_args.stack_a[s_s.size] == find_min_nbr())
	{
		top_nbr_go_to_bottom_and_shift_up_by_one();
		swap_a();
	}
	if (s_args.stack_a[1] == find_the_max_nbr() \
		&& s_args.stack_a[0] == find_min_nbr())
	{
		bottom_number_go_to_up_and_push_down_by_one();
		swap_a();
	}
	else if (s_args.stack_a[0] == find_the_max_nbr() \
		&& s_args.stack_a[1] == find_min_nbr())
		top_nbr_go_to_bottom_and_shift_up_by_one();
	else if (s_args.stack_a[s_s.size] == find_min_nbr() \
		&& s_args.stack_a[1] == find_the_max_nbr())
		bottom_number_go_to_up_and_push_down_by_one();
}
