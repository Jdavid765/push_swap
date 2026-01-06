/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 21:10:09 by david             #+#    #+#             */
/*   Updated: 2026/01/06 18:50:15 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->cpy)
	{
		while (stack->cpy[i])
			free(stack->cpy[i++]);
		free(stack->cpy);
	}
	if (stack->a.list)
		free(stack->a.list);
	if (stack->b.list)
		free(stack->b.list);
}

void	ft_free(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->cpy[i])
		free(stack->cpy[i++]);
	free(stack->cpy);
	stack->cpy = NULL;
}
