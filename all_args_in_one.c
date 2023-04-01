/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_args_in_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:56:32 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/01 16:04:52 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	int		count;
	int		ismis;
	long	result;

	count = 0;
	ismis = 1;
	result = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
		{
			ismis = -1;
		}
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = (result * 10) + (str[count] - 48);
		count++;
	}
	return (result * ismis);
}

char	*get_tal_space(char *str)
{
	int		count;
	char	*dst;

	count = 0;
	while (str[count] != ' ' && str[count] != '\0')
	{
		count++;
	}
	dst = malloc((count + 1) * sizeof(char));
	count = 0;
	while (str[count] != ' ' && str[count] != '\0')
	{
		dst[count] = str[count];
		count++;
	}
	dst[count] = 0;
	return (dst);
}

char	**get_all_args(char **args)
{
	int		count;
	char	**arr;
	int		i;
	int		j;

	j = 0;
	i = 0;
	count = 0;
	arr = malloc(sizeof(char *) * 10000);
	while (args[count])
	{
		while (args[count][i])
		{
			if (args[count][i] == ' ')
				i++;
			if ((args[count][i] != ' '
				&& (args[count][i - 1] == ' ' || args[count][i - 1] == '\0')))
				arr[j++] = get_tal_space(args[count] + i);
			i++;
		}
		i = 0;
		count++;
	}
	s_args.arr_size = j;
	return (arr);
}
