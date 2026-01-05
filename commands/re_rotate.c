/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 21:09:32 by david             #+#    #+#             */
/*   Updated: 2026/01/05 21:37:07 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	tmp;

	i = stack->a.size - 1;
	tmp = 0;
	while (i >= 0)
	{
		if (i == stack->a.size - 1)
			tmp = stack->a.list[i];
		if (i == 0)
			stack->a.list[i] = tmp;
		else
			stack->a.list[i] = stack->a.list[i - 1];
		i--;
	}
}

void	rrb(t_stack *stack)
{
	int	i;
	int	tmp;

	i = stack->b.size - 1;
	tmp = 0;
	while (i >= 0)
	{
		if (i == stack->b.size - 1)
			tmp = stack->b.list[i];
		if (i == 0)
			stack->b.list[i] = tmp;
		else
			stack->b.list[i] = stack->b.list[i - 1];
		i--;
	}
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}
