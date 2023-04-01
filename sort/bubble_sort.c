/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:55:30 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/29 23:55:31 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**bubble_sort(void)
{
	int		count;
	int		index;
	char	*tmp;
	char	**arr;

	count = 0;
	index = 0;
	tmp = NULL;
	arr = s_args.fake_args;
	while (arr[count])
	{
		index = 0;
		while (arr[index + 1])
		{
			if (ft_atoi(arr[index]) > ft_atoi(arr[index + 1]))
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
