/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lenght_of_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:08:27 by mamazzal          #+#    #+#             */
/*   Updated: 2023/03/29 23:08:28 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_length_stack_a(void)
{
	int	count;

	count = 0;
	while (s_args.stack_a[count])
	{
		count++;
	}
	return (count);
}

int	count_length_stack_b(void)
{
	int	count;

	count = 0;
	while (s_args.stack_b[count])
	{
		count++;
	}
	return (count);
}
