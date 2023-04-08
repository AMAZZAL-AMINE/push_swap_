/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:17:09 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/08 22:54:34 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// sa
void	swap_a(void)
{
	char	*temp;

	temp = s_args.stack_a[1];
	s_args.stack_a[1] = s_args.stack_a[0];
	s_args.stack_a[0] = temp;
	printf("sa\n");
}

// ra => rotate stack a;
void	top_nbr_go_to_bottom_and_shift_up_by_one(void)
{
	int		count;
	char	*top_elemn;

	//no leaks
	top_elemn = s_args.stack_a[0];
	count	= 0;
	while (count != (count_length_stack_a() - 1))
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
	char	*last_elemn;

	count = count_length_stack_a() - 1;
	index = 0;
	last_elemn = s_args.stack_a[count_length_stack_a() - 1];
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
	int		count;
	int		size;
	char	**dst;
	int		index;

	count = 0;
	size = count_length_stack_b();
	dst = malloc(sizeof(char *) * (count_length_stack_b() + 2));
	index = 1;
	dst[0] = s_args.stack_a[0];
	while (count < size)
	{
		dst[index++] = s_args.stack_b[count++];
	}
	if (s_args.stack_b)
		free(s_args.stack_b);
	dst[index] = NULL;
	s_args.stack_b = dst;
	count = 0;
	size = count_length_stack_a();
	while (count < size - 1)
	{
		s_args.stack_a[count] = s_args.stack_a[count + 1];
		count++;
	}
	s_args.stack_a[count] = NULL;
	printf("pb\n");
}
