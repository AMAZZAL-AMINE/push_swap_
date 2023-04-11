/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_already_sorted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:15:18 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/10 16:43:16 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_already_sorted(void)
{
	int	count;
	int	index;
	int	check;

	count = 0;
	index = s_args.arr_size - 1;
	check = 0;
	while ((count + 1) < index)
	{
		if (s_args.stack_a[count] > s_args.stack_a[count + 1])
		{
			check += 1;
		}
		count++;
	}
	if (check == 0)
	{
		exit(0);
	}
}
