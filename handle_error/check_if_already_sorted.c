/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_already_sorted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:15:18 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/27 18:21:09 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_already_sorted(void)
{
	int	count;
	int	index;
	int	check;

	count = 1;
	index = count_length_stack_a() - 1;
	check = 0;
	while (count < index)
	{
		if (ft_atoi(s_args.stack_a[count]) > ft_atoi(s_args.stack_a[count + 1]))
		{
			check++;
		}
		count++;
	}
	if (check == 0)
	{
		printf("Alredy Sorted");
		exit(1);
	}
}
