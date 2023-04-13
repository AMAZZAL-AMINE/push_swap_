/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:14:36 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/13 17:55:19 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	*args;

	if (argc == 2 && argv[1][0] == '\0')
	{
		return 0;
	}
	if (argc == 1)
		return (0);
	args = set_argv_in_one_array(argv + 1);
	check_empty_args(argv + 1, args);
	check_valid_numbers(argv + 1, args);
	s_args.stack_a = get_all_args(args);
	s_args.stack_b = malloc(s_args.arr_size * sizeof(int *));
	s_args.fake_args = get_all_args(args);
	s_args.arrb_size = 0;
	s_args.fake_size = s_args.arr_size;
	if (s_args.arr_size == 1)
	{
		free_all();
		return (0);
	}
	check_duplaicate_nbrs(args);
	check_if_already_sorted(args);
	sort_args_using_only_actions();
	free(args);
	free_all();
	return (0);
}
