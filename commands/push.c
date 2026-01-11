/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 21:26:41 by david             #+#    #+#             */
/*   Updated: 2026/01/11 18:18:35 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	pb(t_stack *stack)
{
	if (stack->a.size <= 0)
		return ;
	if (stack->b.size >= 1)
	{
		stack->a.size--;
		stack->b.size++;
		order_more_b(stack);
		order_minus_a(stack);
	}
	else
	{
		stack->b.list[0] = stack->a.list[0];
		stack->a.size--;
		stack->b.size++;
		order_minus_a(stack);
	}
}

void	pa(t_stack *stack)
{
	if (stack->b.size <= 0)
		return ;
	if (stack->a.size >= 1)
	{
		stack->a.size++;
		stack->b.size--;
		order_more_a(stack);
		order_minus_b(stack);
	}
	else
	{
		stack->a.list[0] = stack->b.list[0];
		stack->a.size++;
		stack->b.size--;
		order_minus_b(stack);
	}
}
