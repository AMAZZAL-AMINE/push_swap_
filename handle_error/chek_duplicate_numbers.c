/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chek_duplicate_numbers.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:50:14 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/08 23:34:06 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_duplaicate_nbrs(void)
{
	int	count;
	int	i;

	count = 0;
	while (s_args.stack_a[count])
	{
		i = 0;
		while (s_args.stack_a[i])
		{
			if (ft_atoi(s_args.stack_a[count]) == ft_atoi(s_args.stack_a[i])
				&& count != i)
			{
				ft_putstr("Error\n");
				exit(1);
			}
			i++;
		}
		count++;
	}
}
