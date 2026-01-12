/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 18:16:36 by david             #+#    #+#             */
/*   Updated: 2026/01/12 14:45:03 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ra(t_stack *stack)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = 0;
	while (i < stack->a.size)
	{
		if (i == 0)
			tmp = stack->a.list[i];
		if (i == stack->a.size - 1)
			stack->a.list[i] = tmp;
		else
			stack->a.list[i] = stack->a.list[i + 1];
		i++;
	}
	stack->instructions++;
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = 0;
	while (i < stack->b.size)
	{
		if (i == 0)
			tmp = stack->b.list[i];
		if (i == stack->b.size - 1)
			stack->b.list[i] = tmp;
		else
			stack->b.list[i] = stack->b.list[i + 1];
		i++;
	}
	stack->instructions++;
	ft_printf("rb\n");
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
	stack->instructions = stack->instructions + 2;
}
