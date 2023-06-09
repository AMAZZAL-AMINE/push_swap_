/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:21:21 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/10 16:24:44 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five_args(void)
{
	int	count;

	count = 0;
	while (count < 2)
	{
		if (s_args.stack_a[s_args.arr_size - 1] \
			== find_min_nbr())
		{
			bottom_number_go_to_up_and_push_down_by_one();
		}
		if (s_args.stack_a[0] == find_min_nbr())
		{
			send_top_of_a_to_top_of_b();
			count++;
		}
		else
		{
			top_nbr_go_to_bottom_and_shift_up_by_one();
		}
	}
	sort_three_args();
	send_top_of_b_to_top_of_a();
	send_top_of_b_to_top_of_a();
}
