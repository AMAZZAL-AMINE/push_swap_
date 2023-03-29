/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:17:09 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/29 23:17:59 by mamazzal         ###   ########.fr       */
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
	char	**dst;

	count = 0;
	dst = malloc(sizeof(char *) * (count_length_stack_a() + 2));
	dst[count_length_stack_a() - 1] = s_args.stack_a[0];
	s_args.stack_a += 1;
	while (count != (count_length_stack_a()))
	{
		dst[count] = s_args.stack_a[count];
		count++;
	}
	s_args.stack_a = dst;
	printf("ra\n");
}

// rra
void	bottom_number_go_to_up_and_push_down_by_one(void)
{
	int		count;
	char	**dst;
	int		index;

	count = 1;
	index = 0;
	dst = malloc(sizeof(char *) * (count_length_stack_a() + 2));
	dst[0] = s_args.stack_a[count_length_stack_a() - 1];
	while (count != count_length_stack_a())
	{
		dst[count] = s_args.stack_a[index];
		index++;
		count++;
	}
	s_args.stack_a = dst;
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
	while (count < size && s_args.stack_b[count])
	{
		dst[index++] = s_args.stack_b[count++];
	}
	s_args.stack_b = dst;
	s_args.stack_a += 1;
	printf("pb\n");
}
