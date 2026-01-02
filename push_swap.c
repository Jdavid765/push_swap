/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:49:57 by david             #+#    #+#             */
/*   Updated: 2026/01/02 19:50:05 by david            ###   ########.fr       */
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
		separate(stack, av[i], &position);	
		position++;
		i++;
	}
	return (0);
}

void	push_swap(t_stack *stack, char **av)
{
	int	i;

	i = 0;
	if (insert_a(stack, av) == -1)
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
		count_alloc_cpy(&stack, av + 1);
		push_swap(&stack, av + 1);
	}
	else
		ft_printf("Error\n");
	return (0);
}
