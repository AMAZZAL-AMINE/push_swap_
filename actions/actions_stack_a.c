/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:17:09 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/10 17:51:24 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// sa
void	swap_a(void)
{
	int	temp;

	temp = s_args.stack_a[1];
	s_args.stack_a[1] = s_args.stack_a[0];
	s_args.stack_a[0] = temp;
	printf("sa\n");
}

// ra => rotate stack a;
void	top_nbr_go_to_bottom_and_shift_up_by_one(void)
{
	int		count;
	int	top_elemn;

	//no leaks
	top_elemn = s_args.stack_a[0];
	count	= 0;
	while (count != (s_args.arr_size - 1))
	{
		s_args.stack_a[count] = s_args.stack_a[count + 1];
		count++;
	}
	s_args.stack_a[count] = top_elemn;
	printf("ra\n");
}

// rra
void	bottom_number_go_to_up_and_push_down_by_one(void)
{
	int		count;
	int		index;
	int	last_elemn;

	count = s_args.arr_size - 1;
	index = 0;
	last_elemn = s_args.stack_a[s_args.arr_size - 1];
	while (count)
	{
		s_args.stack_a[count] = s_args.stack_a[count - 1];
		count--;
	}
	s_args.stack_a[0] = last_elemn;
	printf("rra\n");
}


// push top of a to top of b (pb)
void	send_top_of_a_to_top_of_b(void)
{
	int top_of_a = s_args.stack_a[0];
	s_args.arrb_size++;
	int count = s_args.arrb_size;
	int i = 0;
	while (count)
	{
		s_args.stack_b[count] = s_args.stack_b[count - 1];
		count--;
	}
	s_args.stack_b[0] = top_of_a;
	count = s_args.arr_size;
	i = 0;
	while ((i + 1) < count)
	{
		s_args.stack_a[i] = s_args.stack_a[i + 1];
		i++;
	}
	s_args.arr_size--;
	printf("pb\n");
}
