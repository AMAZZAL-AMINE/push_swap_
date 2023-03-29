/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_nbr_and_min_nbr_stack_b.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:04:36 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/29 23:05:14 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_the_max_nbr_stack_b(void)
{
	int	count;
	int	max_nbr;

	count = 0;
	max_nbr = ft_atoi(s_args.stack_b[0]);
	while (s_args.stack_b[count])
	{
		if (ft_atoi(s_args.stack_b[count]) > max_nbr)
		{
			max_nbr = ft_atoi(s_args.stack_b[count]);
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
	min_nbr = ft_atoi(s_args.stack_b[0]);
	while (s_args.stack_b[count])
	{
		if (ft_atoi(s_args.stack_b[count]) < min_nbr)
		{
			min_nbr = ft_atoi(s_args.stack_b[count]);
		}
		count++;
	}
	return (min_nbr);
}
