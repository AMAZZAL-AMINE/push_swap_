/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:55:30 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/10 16:45:31 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*bubble_sort(void)
{
	int		count;
	int		index;
	int		tmp;
	int		*arr;

	count = 0;
	index = 0;
	arr = s_args.fake_args;
	while (count < s_args.fake_size)
	{
		index = 0;
		while (arr[index + 1])
		{
			if (arr[index] > arr[index + 1])
			{
				tmp = arr[index];
				arr[index] = arr[index + 1];
				arr[index + 1] = tmp;
			}
			index++;
		}
		count++;
	}
	return (arr);
}
