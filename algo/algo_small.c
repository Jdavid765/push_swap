/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:32:43 by david             #+#    #+#             */
/*   Updated: 2026/01/12 15:56:24 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	algo_small(t_stack *stack)
{
	if (stack->a.size == 2)
		for_two(stack);
	if (stack->a.size == 3)
		for_tree(stack);
}

void	for_two(t_stack *stack)
{
	if (stack->a.list[0] > stack->a.list[1])
		sa(stack);
	else
		ft_printf("All good nothing to change\n");
}

void	for_tree(t_stack *stack)
{
	int	i;
	int	small;

	i = 0;
	small = 100000;
	while (i < stack->a.size)
	{
		if (small > stack->a.list[i])
			small = stack->a.list[i];
		i++;
	}
	while (stack->a.list[0] != small)
		ra(stack);
	pb(stack);
	if (stack->a.list[0] > stack->a.list[1])
		sa(stack);
	pa(stack);
}
