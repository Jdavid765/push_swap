/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:48:50 by david             #+#    #+#             */
/*   Updated: 2026/01/24 12:05:58 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack *stack)
{
	stack->alloc = 0;
	stack->a.list = NULL;
	stack->b.list = NULL;
	stack->cpy = NULL;
	stack->a.size = 0;
	stack->b.size = 0;
	stack->instructions = 0;
	stack->sorted.list = NULL;
	stack->sorted.size = 0;
	stack->int_max = NULL;
}
