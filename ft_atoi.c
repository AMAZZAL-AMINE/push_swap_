/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:41:50 by mamazzal          #+#    #+#             */
/*   Updated: 2023/04/13 18:24:29 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max_and_min(long nbr)
{
	if ((nbr > 2147483647) || (nbr < -2147483648))
	{
		free_all();
		ft_putstr("Error\n");
		exit(1);
	}
}

void	check_length_nbr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	if (count >= 11 && (str[0] - 48) > 0)
	{
		write(2, "Error\n", 6);
		free_all();
		exit(1);
	}
}

long	ft_atoi(char *str)
{
	int		count;
	int		ismis;
	long	result;
	int		c;

	count = 0;
	ismis = 1;
	result = 0;
	c = 0;
	check_length_nbr(str);
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
	check_max_and_min(result * ismis);
	return (result * ismis);
}
