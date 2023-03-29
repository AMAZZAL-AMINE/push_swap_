/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_action_in_one.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:29:16 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/29 23:29:17 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	run_sa_and_sb_at_same_time(void)
{
	swap_a();
	swap_b();
}

void	run_ra_and_rb_at_ame_time(void)
{
	top_nbr_go_to_bottom_and_shift_up_by_one();
	top_nbr_go_to_bottom_and_shift_up_by_one_stack_b();
}

void	run_rra_and_rrb_at_same_time(void)
{
	bottom_number_go_to_up_and_push_down_by_one();
	bottom_number_go_to_up_and_push_down_by_one_stack_b();
}
