/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:24:49 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/14 16:01:41 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_b(void)
{
	int	temp;

	temp = s_args.stack_b[1];
	s_args.stack_b[1] = s_args.stack_b[0];
	s_args.stack_b[0] = temp;
	write(1, "sb\n", 3);
}

void	top_nbr_go_to_bottom_and_shift_up_by_one_stack_b(void)
{
	int		count;
	int		top_elemn;
	int		size;

	top_elemn = s_args.stack_b[0];
	count = 0;
	size = s_args.arrb_size - 1;
	while (count < size)
	{
		s_args.stack_b[count] = s_args.stack_b[count + 1];
		count++;
	}
	s_args.stack_b[count] = top_elemn;
	write(1, "rb\n", 3);
}

// rrb
void	bottom_number_go_to_up_and_push_down_by_one_stack_b(void)
{
	int	count;
	int	index;
	int	last_elemn;

	count = s_args.arrb_size - 1;
	index = 0;
	last_elemn = s_args.stack_b[s_args.arrb_size - 1];
	while (count)
	{
		s_args.stack_b[count] = s_args.stack_b[count - 1];
		count--;
	}
	s_args.stack_b[index] = last_elemn;
	write(1, "rrb\n", 4);
}

void	send_top_of_b_to_top_of_a(void)
{
	int	top_of_b;
	int	count;
	int	i;

	top_of_b = s_args.stack_b[0];
	s_args.arr_size++;
	count = s_args.arr_size;
	i = 0;
	while (count)
	{
		s_args.stack_a[count] = s_args.stack_a[count - 1];
		count--;
	}
	s_args.stack_a[0] = top_of_b;
	count = s_args.arrb_size;
	i = 0;
	while (i < count)
	{
		s_args.stack_b[i] = s_args.stack_b[i + 1];
		i++;
	}
	s_args.arrb_size--;
	write(1, "pa\n", 3);
}
