/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_args_in_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:56:32 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/10 23:43:32 by mamazzal         ###   ########.fr       */
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


// char	*ft_strndup(char const *str, size_t max)
// {
// 	size_t	index;
// 	char	*dst;

// 	index = 0;
// 	dst = malloc(sizeof(char) * (max + 1));
// 	if (!dst)
// 	{
// 		return (0);
// 	}
// 	while (str[index] && index < max)
// 	{
// 		dst[index] = str[index];
// 		index++;
// 	}
// 	dst[index] = '\0';
// 	return (dst);
// }

// size_t	ft_filter_str(char const *str, char crt)
// {
// 	size_t	index;
// 	size_t	word_count;

// 	index = 0;
// 	word_count = 0;
// 	while (str[index])
// 	{
// 		if ((index == 0 && str[index] != crt)
// 			|| (str[index] == crt && str[index + 1] && str[index + 1] != crt))
// 		{
// 			word_count++;
// 		}
// 		index++;
// 	}
// 	return (word_count);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**strlist;
// 	size_t	rslt;
// 	size_t	count;
// 	size_t	str_count;

// 	count = 0;
// 	str_count = 0;
// 	if (!s)
// 		return (0);
// 	strlist = malloc(sizeof(char *) * (ft_filter_str(s, c) + 1));
// 	if (!strlist)
// 		return (0);
// 	while (count < ft_filter_str(s, c) && s[str_count])
// 	{
// 		while (s[str_count] == c)
// 			str_count++;
// 		rslt = str_count;
// 		while (s[str_count] != c && s[str_count] != '\0')
// 			str_count++;
// 		strlist[count] = ft_strndup(&s[rslt], str_count - rslt);
// 		count++;
// 	}
// 	strlist[count] = 0;
// 	return (strlist);
// }

// int	cout_get_all_args(char **args)
// {
// 	int count = 0;
// 	int	index = 0;
// 	int	jount = 0;
// 	while (args[count]) {
// 		index = 0;
// 		while (ft_split(args[count], ' ')[index]) {
// 			index++;
// 			jount++;
// 		}
// 		count++;
// 	}
// 	return (jount);
// }

// int		*get_all_args(char **args)
// {
// 	int	*dst;

// 	dst = malloc(sizeof(int *) * (cout_get_all_args(args) + 1));
// 	int count = 0;
// 	int	index = 0;
// 	int	jount = 0;
// 	char *tmp;
// 	while (args[count]) {
// 		index = 0;
// 		while (ft_split(args[count], ' ')[index]) {
			
// 			dst[jount] = ft_atoi(ft_split(args[count], ' ')[index]);
// 			index++;
// 			jount++;
// 		}
// 		count++;
// 	}
// 	s_args.arr_size = jount;
// 	return (dst);
// }
