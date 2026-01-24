/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good_orders.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:00:46 by david             #+#    #+#             */
/*   Updated: 2026/01/24 11:17:45 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	good_orders(t_stack *stack)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < stack->a.size)
	{
		if (i == stack->a.size - 1)
		{
			total++;
			break ;
		}
		if (stack->a.list[i] < stack->a.list[i + 1])
			total++;
		i++;
	}
	if (total == stack->a.size)
		orders(stack);
}

void	orders(t_stack *stack)
{
	free_all(stack);
	exit(1);
}
