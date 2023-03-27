/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:23:23 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/27 22:45:04 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

void	error_msg(void)
{
	printf("Error\n");
	exit(1);
}

void	check_valid_numbers(void)
{
	int	c;
	int	i;

	c = 0;
	while (s_args.stack_a[c])
	{
		i = 0;
		while (s_args.stack_a[c][i])
		{
			if (is_num(s_args.stack_a[c][i]) || s_args.stack_a[c][i] == '-'
				|| s_args.stack_a[c][i] == '+')
			{
				if (s_args.stack_a[c][i] == '-' || s_args.stack_a[c][i] == '+')
				{
					if (!is_num(s_args.stack_a[c][i + 1]) || i != 0)
						error_msg();
				}
				i++;
			}
			else
				error_msg();
		}
		c++;
	}
}
