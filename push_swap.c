/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:49:57 by david             #+#    #+#             */
/*   Updated: 2026/01/01 19:36:05 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	insert_a(t_stack *stack, char **av)
{
	int	i;

	i = 0;
	stack->alloc = count_alloc(av);
	stack->a.list = ft_calloc(stack->alloc, sizeof(int));
	if (!stack->a.list)
		return (-1);
	stack->b.list = ft_calloc(stack->alloc, sizeof(int));
	if (!stack->b.list)
		return (-1);
	while (av[i])
	{
		stack->a.list[i] = ft_atoi(av[i]);
		if (stack->a.list[i] == -9010)
			return (-1);
		i++;
	}
	return (0);
}

void	push_swap(t_stack *stack, char **av)
{
	int	i;

	i = 0;
	if (insert_a(stack, av + 1) == -1)
		errors();
	while (i < stack->alloc)
		ft_printf("%d\n", stack->a.list[i++]);
}
int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac > 1)
	{
		init(&stack);
		push_swap(&stack, av);
	}
	else
		ft_printf("Error\n");
	return (0);
}
