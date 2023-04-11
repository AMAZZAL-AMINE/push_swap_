/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_args_in_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:56:32 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/11 16:49:37 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_items_in_argv(char **av)
{
	int	count;
	int	index;
	int	j;

	count = 0;
	j = 0;
	while (av[count])
	{
		index = 0;
		while (av[count][index])
		{
				j++;
				index++;
		}
		j++;
		count++;
	}
	return (j);
}

char	*set_argv_in_one_array(char **av)
{
	int		count;
	int		index;
	char	*dst;
	int		j;

	count = 0;
	index = 0;
	dst = malloc(sizeof(char) * count_items_in_argv(av));
	j = 0;
	while (av[count])
	{
		index = 0;
		while (av[count][index])
		{
				dst[j] = av[count][index];
				j++;
				index++;
		}
		dst[j] = ' ';
		j++;
		count++;
	}
	return (dst);
}

char	*get_tal_space(char *str)
{
	int		count;
	char	*dst;

	dst = NULL;
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
	dst[count] = '\0';
	return (dst);
}

int	count_numbers_in_args(char *args)
{
	int	count;
	int	save;

	save = 0;
	count = 0;
	while (args[count])
	{
		while (args[count] == ' ' && args[count] != '\0')
		{
			count++;
		}
		if (args[count] == '\0')
			break ;
		save++;
		while (args[count] != ' ' && args[count] != '\0')
		{
			count++;
		}
	}
	return (save);
}

int	*get_all_args(char *args)
{
	int		count;
	int		index;
	int		arg_size;
	int		*dst;
	char	*tmp;

	dst = NULL;
	count = 0;
	index = 0;
	dst = malloc(sizeof(int *) * (count_numbers_in_args(args)));
	arg_size = count_numbers_in_args(args);
	while (arg_size)
	{
		while (args[count] == ' ' && args[count] != '\0')
			count++;
		if (args[count] == '\0')
			break ;
		tmp = get_tal_space(&args[count]);
		dst[index] = ft_atoi(tmp);
		index++;
		while (args[count] != ' ' && args[count] != '\0')
			count++;
		arg_size--;
		free(tmp);
	}
	s_args.arr_size = index;
	return (dst);
}
