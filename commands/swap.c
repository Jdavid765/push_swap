/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:48:08 by david             #+#    #+#             */
/*   Updated: 2026/01/05 21:45:41 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp;

	if (stack->a.size == 1 || stack->a.size == 0)
		return ;
	tmp = 0;
	tmp = stack->a.list[0];
	stack->a.list[0] = stack->a.list[1];
	stack->a.list[1] = tmp;
}

void	sb(t_stack *stack)
{
	int	tmp;

	if (stack->b.size == 1 || stack->b.size == 0)
		return ;
	tmp = 0;
	tmp = stack->b.list[0];
	stack->b.list[0] = stack->b.list[1];
	stack->b.list[1] = tmp;
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}