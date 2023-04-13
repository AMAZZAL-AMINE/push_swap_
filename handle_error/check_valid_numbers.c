/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:23:23 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/13 01:54:20 by mamazzal         ###   ########.fr       */
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

int	check_what_near_minus(char **argv, int index, int count)
{
	if (index != 0 && argv[count][index - 1] == ' ')
		return (1);
	else if (index == 0)
		return (1);
	else
		return (0);
}

void	error_msg_two(char *arg)
{
	free(arg);
	write(2, "Error\n", 6);
	exit(1);
}

void	check_valid_numbers(char **argv, char *args)
{
	int	c;
	int	i;

	c = -1;
	while (argv[++c])
	{
		i = 0;
		while (argv[c][i])
		{
			if (is_num(argv[c][i]) || argv[c][i] == '-'
				|| argv[c][i] == '+' || argv[c][i] == ' ')
			{
				if (argv[c][i] == '-' || argv[c][i] == '+')
				{
					if (!is_num(argv[c][i + 1]) ||
						!check_what_near_minus(argv, i, c))
						error_msg_two(args);
				}
				i++;
			}
			else
				error_msg_two(args);
		}
	}
}
