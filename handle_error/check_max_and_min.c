/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_and_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:35:50 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/05 20:06:11 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_max_and_min(void)
{
	int	count;

	count = 0;
	while (s_args.stack_a[count])
	{
		if (ft_atoi(s_args.stack_a[count]) > 2147483647
			|| ft_atoi(s_args.stack_a[count]) < -2147483648)
		{
			ft_putstr("Error\n");
			exit(1);
		}
		count++;
	}
}
