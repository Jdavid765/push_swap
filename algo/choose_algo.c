/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:33:37 by david             #+#    #+#             */
/*   Updated: 2026/01/13 17:19:40 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	choose_algo(t_stack *stack)
{
	if (stack->a.size <= 5)
		algo_small(stack);
	else
		algo_big(stack);
}