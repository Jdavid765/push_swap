/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:32:43 by david             #+#    #+#             */
/*   Updated: 2026/01/11 18:13:28 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	algo_small(t_stack *stack)
{
	if (stack->a.size <= 2)
		for_two(stack);
}

void	for_two(t_stack *stack)
{
	if (stack->a.list[0] > stack->a.list[1])
	{
		sa(stack);
		stack->instructions++;
	}
	else
		ft_printf("All good nothing to change\n");
}