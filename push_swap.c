/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:14:36 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/08 22:34:15 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	*args;

	if (argc == 1)
	{
		exit(1);
	}
	args = set_argv_in_one_array(argv + 1);
	check_empty_args(argv + 1);
	s_args.stack_a = get_all_args(args);
	s_args.stack_b = malloc(count_length_stack_a() * sizeof(char));
	s_args.fake_args = get_all_args(args);
	check_max_and_min();
	check_valid_numbers();
	check_duplaicate_nbrs();
	check_if_already_sorted();
	sort_args_using_only_actions();
	free(args);
	free_a(s_args.stack_b);
 
	// check_leaks();
	// int c = 0;
	// while (s_args.stack_a[c])
	// {
	// 	printf("%s\n", s_args.stack_a[c]);
	// 	c++;
	// }
 
	return (0);
}
