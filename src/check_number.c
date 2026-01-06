/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:35:35 by david             #+#    #+#             */
/*   Updated: 2026/01/05 15:28:42 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	same_numbers(t_stack *stack)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < stack->alloc)
	{
		x = i + 1;
		while (x < stack->alloc)
		{
			if (stack->a.list[i] == stack->a.list[x])
				return (-1);
			x++;
		}
		i++;
	}
	return (0);
}
