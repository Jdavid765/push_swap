/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:49:57 by david             #+#    #+#             */
/*   Updated: 2026/01/01 17:54:45 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	insert_a(t_stack *stack, char **av)
{
	int	i;

	i = 0;
	stack->a.alloc = count_alloc(av);
	stack->a.list = malloc(stack->a.alloc * sizeof(int));
	while (av[i])
	{
		stack->a.list[i] = ft_atoi(av[i]);
		if (stack->a.list[i] == -9010)
			return (-1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	stack;
	int		i;

	i = 0;
	if (ac > 1)
	{
		init(&stack);
		if (insert_a(&stack, av + 1) == -1)
			errors();
		while (stack.a.list[i])
			ft_printf("%d\n", stack.a.list[i++]);
	}
	else
		ft_printf("Error\n");
	return (0);
}
