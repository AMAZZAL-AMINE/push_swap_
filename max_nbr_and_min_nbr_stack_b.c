/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_nbr_and_min_nbr_stack_b.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:04:36 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/10 16:35:55 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_the_max_nbr_stack_b(void)
{
	int	count;
	int	max_nbr;

	count = 0;
	max_nbr = s_args.stack_b[0];
	while (count < s_args.arrb_size)
	{
		if (s_args.stack_b[count] > max_nbr)
		{
			max_nbr = s_args.stack_b[count];
		}
		count++;
	}
	return (max_nbr);
}

int	find_min_nbr_stack_b(void)
{
	int	count;
	int	min_nbr;

	count = 0;
	min_nbr = s_args.stack_b[0];
	while (count < s_args.arrb_size)
	{
		if (s_args.stack_b[count] < min_nbr)
		{
			min_nbr = s_args.stack_b[count];
		}
		count++;
	}
	return (min_nbr);
}
