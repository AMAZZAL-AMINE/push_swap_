/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_nbr_and_min_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:59:46 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/29 23:02:30 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_the_max_nbr(void)
{
	int	count;
	int	size;
	int	max_nbr;

	count = 0;
	size = s_args.arr_size;
	max_nbr = ft_atoi(s_args.stack_a[0]);
	while (s_args.stack_a[count])
	{
		if (ft_atoi(s_args.stack_a[count]) > max_nbr)
		{
			max_nbr = ft_atoi(s_args.stack_a[count]);
		}
		count++;
	}
	return (max_nbr);
}

int	find_min_nbr(void)
{
	int	count;
	int	min_nbr;
	int	size;

	count = 0;
	min_nbr = ft_atoi(s_args.stack_a[0]);
	size = s_args.arr_size;
	while (s_args.stack_a[count])
	{
		if (ft_atoi(s_args.stack_a[count]) < min_nbr)
		{
			min_nbr = ft_atoi(s_args.stack_a[count]);
		}
		count++;
	}
	return (min_nbr);
}
