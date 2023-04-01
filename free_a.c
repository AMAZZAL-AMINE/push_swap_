/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:06:11 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/01 14:08:20 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_a(char **freyage)
{
	int	count;

	count = 0;
	while (freyage[count])
	{
		free(freyage[count]);
		count++;
	}
	free(freyage);
}
