/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_already_sorted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:15:18 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/08 23:31:30 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_already_sorted(void)
{
	int	count;
	int	index;
	int	check;

	count = 0;
	index = count_length_stack_a() - 1;
	check = 0;
	while (count < index)
	{
		if (ft_atoi(s_args.stack_a[count]) > ft_atoi(s_args.stack_a[count + 1]))
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
