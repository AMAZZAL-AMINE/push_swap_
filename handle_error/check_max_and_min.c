/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_and_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:35:50 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/10 16:44:04 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_max_and_min(void)
{
	int	count;

	count = 0;
	while (count < s_args.arr_size)
	{
		if (s_args.stack_a[count] > 2147483647
			|| s_args.stack_a[count] < -2147483648)
		{
			ft_putstr("Error\n");
			exit(1);
		}
		count++;
	}
}
