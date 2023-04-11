/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_nbr_and_min_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:59:46 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/10 16:37:11 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_the_max_nbr(void)
{
	int	count;
	int	max_nbr;

	count = 0;
	max_nbr = s_args.stack_a[0];
	while (count < s_args.arr_size)
	{
		if (s_args.stack_a[count] > max_nbr)
		{
			max_nbr = s_args.stack_a[count];
		}
		count++;
	}
	return (max_nbr);
}

int	find_min_nbr(void)
{
	int	count;
	int	min_nbr;

	count = 0;
	min_nbr = s_args.stack_a[0];
	while (count < s_args.arr_size)
	{
		if (s_args.stack_a[count] < min_nbr)
		{
			min_nbr = s_args.stack_a[count];
		}
		count++;
	}
	return (min_nbr);
}
