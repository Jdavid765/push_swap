/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:49:57 by david             #+#    #+#             */
/*   Updated: 2026/01/22 19:45:03 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	insert_a(t_stack *stack, char **av)
{
	int	i;
	int	position;

	i = 0;
	position = 0;
	stack->a.list = ft_calloc(stack->alloc, sizeof(int));
	if (!stack->a.list)
		return (-1);
	stack->b.list = ft_calloc(stack->alloc, sizeof(int));
	if (!stack->b.list)
		return (-1);
	while (av[i])
	{
		if (separate(stack, av[i], &position) == -1)
			return (-1);
		i++;
	}
	stack->a.size = stack->alloc;
	return (0);
}

void	push_swap(t_stack *stack, char **av)
{
	if (insert_a(stack, av) == -1)
		errors(stack);
	if (same_numbers(stack) == -1)
		errors(stack);
	good_orders(stack);
	choose_algo(stack);
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac > 1)
	{
		init(&stack);
		if (count_alloc_cpy(&stack, av + 1) == -1)
			errors(&stack);
		push_swap(&stack, av + 1);
		free_all(&stack);
	}
	else
		ft_printf("Error minimun 2 numbers\n");
	return (0);
}
