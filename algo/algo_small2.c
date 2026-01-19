/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:17:18 by david             #+#    #+#             */
/*   Updated: 2026/01/19 15:47:50 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	for_four(t_stack *stack)
{
	int	i;
	int	bigger;
	int	position;
	int	mid;

	i = 0;
	bigger = -2147483;
	position = 0;
	mid = (stack->a.size - 1) / 2;
	while (i < stack->a.size)
	{
		if (bigger < stack->a.list[i])
		{
			bigger = stack->a.list[i];
			position = i;
		}
		i++;
	}
	best_rotation(stack, position, mid, bigger);
	algo_four_five(stack);
	last_rotation(stack,mid);
	pa(stack);
	ra(stack);
}

void	algo_four_five(t_stack *stack)
{
	int	i;
	
	i = 1;
	if (stack->a.list[0] > stack->a.list[1])
		sa(stack);
	while (i < stack->a.size - 1)
	{
		if (stack->a.list[i] > stack->a.list[i + 1])
			ra_sa(stack, i);
		ra(stack);
		i++;
	}
}

void	ra_sa(t_stack *stack, int position)
{
	while (position != 0)
	{
		ra(stack);
		position--;
	}
	sa(stack);
}

void	best_rotation(t_stack *stack, int position, int mid, int bigger)
{
	if (position <= mid)
	{
		while (bigger != stack->a.list[0])
			ra(stack);
	}
	else
		while (bigger != stack->a.list[0])
			rra(stack);
	pb(stack);
}

void	last_rotation(t_stack *stack, int mid)
{
	int	i;
	int	small;
	int	position;
	
	i = 0;
	small = 2121221;
	position = 0;
	while (i < stack->a.size)
	{
		if(small > stack->a.list[i])
		{
			small = stack->a.list[i];
			position = i;
		}
		i++; 
	}
	if (position < mid)
		while (small != stack->a.list[0])
			ra(stack);
	else
		while (small != stack->a.list[0])
			rra(stack);
}
