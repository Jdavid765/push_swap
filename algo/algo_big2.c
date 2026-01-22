/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_big2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 03:07:48 by david             #+#    #+#             */
/*   Updated: 2026/01/22 19:12:39 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

int	search_index(t_stack *stack, int nb)
{
	int	i;

	i = 0;
	while (i < stack->sorted.size)
	{
		if (nb == stack->sorted.list[i])
			return (i);
		i++;
	}
	return (0);
}

void	push_all_a(t_stack *stack)
{
	while (stack->b.size > 0)
		pa(stack);
}

void	sort_in_list(t_stack *stack)
{
	int	i;
	int	j;

	j = 0;
	stack->sorted.list = ft_calloc(stack->alloc, sizeof(int));
	stack->sorted.size = stack->a.size;
	if (!stack->sorted.list)
		errors(stack);
	i = 0;
	loop_sorted_in_list(stack, i, j);
}

void	loop_sorted_in_list(t_stack *stack, int i, int j)
{
	int	tmp;

	tmp = 0;
	while (i < stack->a.size)
	{
		stack->sorted.list[i] = stack->a.list[i];
		i++;
	}
	i = 0;
	while (i < stack->sorted.size)
	{
		j = i;
		while (j < stack->sorted.size)
		{
			if (stack->sorted.list[i] > stack->sorted.list[j])
			{
				tmp = stack->sorted.list[i];
				stack->sorted.list[i] = stack->sorted.list[j];
				stack->sorted.list[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
