/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:01:30 by david             #+#    #+#             */
/*   Updated: 2026/01/24 12:30:57 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	fake_atoi(const char *nptr)
{
	long int	res;
	int			x;
	long int	min;

	x = 0;
	res = 0;
	min = 1;
	while (nptr[x] == 32 || (nptr[x] >= 9 && nptr[x] <= 13))
		x++;
	if (nptr[x] == '-' || nptr[x] == '+')
	{
		if (nptr[x] == '-')
			min *= -1;
		x++;
	}
	while (nptr[x] >= 48 && nptr[x] <= 57)
	{
		res = res * 10 + (nptr[x] - '0');
		x++;
	}
	return (res * min);
}

int	check_int_max(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->alloc)
	{
		if (stack->int_max[i] > 2147483647 || stack->int_max[i] < -2147483648)
			return (-1);
		i++;
	}
	return (0);
}
