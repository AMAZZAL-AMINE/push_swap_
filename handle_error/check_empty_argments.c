/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_empty_argments.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:34:59 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/13 01:36:51 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_empty_args(char **args, char *arr)
{
	int	count;
	int	index;

	count = 0;
	while (args[count])
	{
		index = 0;
		if (args[count][0] == '\0' ||
			args[count][0] == ' ')
		{
			if (args[count][0] == ' ')
			{
				while (args[count][index])
				{
					if (args[count][index] != ' ' && args[count][index] != '\0')
						return ;
					index++;
				}
			}
			error_msg_two(arr);
		}
		count++;
	}
}
