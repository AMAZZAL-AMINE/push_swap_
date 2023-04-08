/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:24:49 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/08 21:14:50 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// sb
void	swap_b(void)
{
	char	*temp;

	temp = s_args.stack_b[1];
	s_args.stack_b[1] = s_args.stack_b[0];
	s_args.stack_b[0] = temp;
	printf("sb\n");
}

// rb => rotate stack b;
void	top_nbr_go_to_bottom_and_shift_up_by_one_stack_b(void)
{
	int		count;
	char	*top_elemn;

	//no leaks
	top_elemn = s_args.stack_b[0];
	count	= 0;
	while (count != (count_length_stack_b() - 1))
	{
		s_args.stack_b[count] = s_args.stack_b[count + 1];
		count++;
	}
	s_args.stack_b[count] = top_elemn;
	printf("rb\n");
}

// rrb
void	bottom_number_go_to_up_and_push_down_by_one_stack_b(void)
{
	int		count;
	int		index;
	char	*last_elemn;

	count = count_length_stack_b() - 1;
	index = 0;
	last_elemn = s_args.stack_b[count_length_stack_b() - 1];
	while (count)
	{
			s_args.stack_b[count] = s_args.stack_b[count - 1];
			count--;
	}
	s_args.stack_b[0] = last_elemn;
	printf("rrb\n");
}

void send_top_of_b_to_top_of_a(void)
{
	char *top_of_b = s_args.stack_b[0];
	int count = count_length_stack_a();
	int i = 0;
	while (count)
	{
		s_args.stack_a[count] = s_args.stack_a[count - 1];
		count--;
	}
	s_args.stack_a[0] = top_of_b;
	count = count_length_stack_b();
	i = 0;
	while (i < count)
	{
		s_args.stack_b[i] = s_args.stack_b[i + 1];
		i++;
	}
	printf("pa\n");
}