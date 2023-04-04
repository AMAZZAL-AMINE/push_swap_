/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:49:40 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/03 19:48:18 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_args_using_only_actions(void)
{
	int	count;
	int	size;
	int	max_nbr;
	int	min_nbr;

	count = 0;
	size = s_args.arr_size;
	max_nbr = find_the_max_nbr();
	min_nbr = find_min_nbr();
	if (s_args.arr_size >= 2 && s_args.arr_size <= 3)
	{
		sort_three_args();
	}
	else if (s_args.arr_size <= 5 && s_args.arr_size >= 4)
	{
		sort_five_args();
	}
	else if (s_args.arr_size > 5 && s_args.arr_size <= 100)
	{
		sort_one_hundred_nbrs();
	}
	else if (s_args.arr_size > 100)
	{
		sort_big();
	}
}
