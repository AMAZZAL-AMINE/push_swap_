/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:24:49 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/06 23:46:16 by mamazzal         ###   ########.fr       */
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

void	send_top_of_b_to_top_of_a(void)
{
	int		count;
	int		size;
	char	**dst;
	int		index;

	count = 0;
	index = 1;
	size = count_length_stack_a() + 1;
	dst = malloc(sizeof(char *) * (count_length_stack_a() + 2));
	dst[0] = s_args.stack_b[0];
	while (count < size)
	{
		dst[index++] = s_args.stack_a[count++];
	}
 dst[index + 1] = NULL;
	s_args.stack_a = dst;
 s_args.stack_b = s_args.stack_b + 1;
	printf("pa\n");
}
