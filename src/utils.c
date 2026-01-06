/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 05:33:45 by david             #+#    #+#             */
/*   Updated: 2026/01/06 21:20:15 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errors(t_stack *stack)
{
	ft_printf("Error idiot\n");
	free_all(stack);
	exit(1);
}

int	count(char **all)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (all[i])
	{
		count++;
		i++;
	}
	return (count);
}

int	count_alloc_cpy(t_stack *stack, char **av)
{
	int		i;

	i = 0;
	while (av[i])
	{
		stack->cpy = ft_split(av[i], ' ');
		if (!stack->cpy)
			return (-1);
		stack->alloc = count(stack->cpy) + stack->alloc;
		ft_free(stack);
		i++;
	}
	ft_printf("alloc = %d\n", stack->alloc);
	return (0);
}

int	separate(t_stack *stack, char *av, int *position)
{
	int	i;

	i = 0;
	stack->cpy = ft_split(av, ' ');
	if (!stack->cpy)
		return (-1);
	while (stack->cpy[i])
	{
		stack->a.list[*position] = ft_atoi(stack->cpy[i]);
		if (stack->a.list[*position] == -9010)
			return (-1);
		i++;
		(*position)++;
	}
	ft_free(stack);
	return (0);
}
