/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:56:37 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/30 15:43:31 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_two_arg(void)
{
	if (s_args.arr_size == 2)
	{
		if (ft_atoi(s_args.stack_a[0]) > ft_atoi(s_args.stack_a[1]))
		{
			swap_a();
			return (1);
		}
	}
	return (0);
}

void	sort_three_args(void)
{
	if (sort_two_arg())
		return ;
	if (ft_atoi(s_args.stack_a[1]) == find_min_nbr() \
		&& ft_atoi(s_args.stack_a[s_args.arr_size - 1]) == find_the_max_nbr())
		swap_a();
	if (ft_atoi(s_args.stack_a[0]) == find_the_max_nbr() \
		&& ft_atoi(s_args.stack_a[s_args.arr_size - 1]) == find_min_nbr())
	{
		top_nbr_go_to_bottom_and_shift_up_by_one();
		swap_a();
	}
	if (ft_atoi(s_args.stack_a[1]) == find_the_max_nbr() \
		&& ft_atoi(s_args.stack_a[0]) == find_min_nbr())
	{
		bottom_number_go_to_up_and_push_down_by_one();
		swap_a();
	}
	else if (ft_atoi(s_args.stack_a[0]) == find_the_max_nbr() \
		&& ft_atoi(s_args.stack_a[1]) == find_min_nbr())
		top_nbr_go_to_bottom_and_shift_up_by_one();
	else if (ft_atoi(s_args.stack_a[s_args.arr_size - 1]) == find_min_nbr() \
		&& ft_atoi(s_args.stack_a[1]) == find_the_max_nbr())
		bottom_number_go_to_up_and_push_down_by_one();
}
