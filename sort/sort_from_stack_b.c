/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_from_stack_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:40:23 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/13 21:14:14 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

struct s_used_vars {
	int	size;
	int	pos_max;
	int	index;
} var;

int	find_position_of_max_nbr(void)
{
	int	position;
	int	index;

	index = 0;
	while (s_args.arrb_size > index)
	{
		if (s_args.stack_b[index] == find_the_max_nbr_stack_b())
		{
			position = index;
			break ;
		}
		index++;
	}
	return (position);
}

void	sorting_from_stack_b(void)
{
	while (s_args.arrb_size)
	{
		var.pos_max = find_position_of_max_nbr();
		var.size = s_args.arrb_size / 2;
		if (var.pos_max > var.size)
		{
			var.index = s_args.arrb_size - 1;
			while (var.index >= var.pos_max)
			{
				bottom_number_go_to_up_and_push_down_by_one_stack_b();
				var.index--;
			}
		}
		else
		{
			var.index = 0;
			while (var.index < var.pos_max)
			{
				top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
				var.index++;
			}
		}
		send_top_of_b_to_top_of_a();
	}
}
