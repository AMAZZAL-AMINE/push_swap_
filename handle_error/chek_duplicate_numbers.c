/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chek_duplicate_numbers.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:50:14 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/27 22:54:26 by mamazzal         ###   ########.fr       */
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
				printf("Error\n");
				exit(1);
			}
			i++;
		}
		count++;
	}
}
