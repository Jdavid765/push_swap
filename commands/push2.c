/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:46:41 by david             #+#    #+#             */
/*   Updated: 2026/01/06 18:50:28 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	order_more_b(t_stack *stack)
{
	int	i;

	i = stack->b.size - 1;
	while (i >= 0)
	{
		if (i == 0)
			stack->b.list[i] = stack->a.list[0];
		else
			stack->b.list[i] = stack->b.list[i - 1];
		i--;
	}
}

void	order_minus_b(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->b.size)
	{
		stack->b.list[i] = stack->b.list[i + 1];
		i++;
	}
}

void	order_more_a(t_stack *stack)
{
	int	i;

	i = stack->a.size - 1;
	while (i >= 0)
	{
		if (i == 0)
			stack->a.list[i] = stack->b.list[0];
		else
			stack->a.list[i] = stack->a.list[i - 1];
		i--;
	}
}

void	order_minus_a(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->a.size)
	{
		stack->a.list[i] = stack->a.list[i + 1];
		i++;
	}
}
