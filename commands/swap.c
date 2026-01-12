/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:48:08 by david             #+#    #+#             */
/*   Updated: 2026/01/12 14:45:28 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp;

	if (stack->a.size <= 1)
		return ;
	tmp = 0;
	tmp = stack->a.list[0];
	stack->a.list[0] = stack->a.list[1];
	stack->a.list[1] = tmp;
	stack->instructions++;
	ft_printf("sa\n");
}

void	sb(t_stack *stack)
{
	int	tmp;

	if (stack->b.size <= 1)
		return ;
	tmp = 0;
	tmp = stack->b.list[0];
	stack->b.list[0] = stack->b.list[1];
	stack->b.list[1] = tmp;
	stack->instructions++;
	ft_printf("sb\n");
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
	stack->instructions = stack->instructions + 2;
}
