/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:49:40 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/07 14:59:58 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_args_using_only_actions(void)
{
	if (count_length_stack_a() >= 2 && count_length_stack_a() <= 3)
	{
		sort_three_args();
	}
	else if (count_length_stack_a() <= 5 && count_length_stack_a() >= 4)
	{
		sort_five_args();
	}
	else if (count_length_stack_a() > 5 && count_length_stack_a() <= 100)
	{
		sort_one_hundred_nbrs();
	}
	else if (count_length_stack_a() > 100)
	{
		sort_big();
	}
}
