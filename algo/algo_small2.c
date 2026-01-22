/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:17:18 by david             #+#    #+#             */
/*   Updated: 2026/01/22 02:46:50 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	for_four(t_stack *stack)
{
	int	size;

	size = stack->a.size;
	while (size > 3)
	{
		push_min_to_b(stack);
		size--;
	}
	for_tree(stack);
	while (stack->b.size > 0)
		pa(stack);
}

void	push_min_to_b(t_stack *stack)
{
	int	i;
	int	small;
	int	position;
	int	mid;

	i = 0;
	small = 2147483647;
	position = 0;
	mid = stack->a.size / 2;
	while (i < stack->a.size)
	{
		if (small > stack->a.list[i])
		{
			small = stack->a.list[i];
			position = i;
		}
		i++;
	}
	if (position <= mid)
		while (stack->a.list[0] != small)
			ra(stack);
	else
		while (stack->a.list[0] != small)
			rra(stack);
	pb(stack);
}

