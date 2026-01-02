/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 05:33:45 by david             #+#    #+#             */
/*   Updated: 2026/01/02 19:51:08 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errors(void)
{
	ft_printf("Error idiot\n");
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

void	count_alloc_cpy(t_stack *stack, char **av)
{
	int		i;

	i = 0;
	while (av[i])
	{
		stack->cpy = ft_split(av[i], ' ');
		if (!stack->cpy)
			errors();
		stack->alloc = count(stack->cpy) +  stack->alloc;
		i++;
	}
	ft_printf("%d\n", stack->alloc);
}

void	separate(t_stack *stack, char *av, int *position)
{
	int	i;

	i = 0;
	stack->cpy = ft_split(av, ' ');
	if (!stack->cpy)
		errors();
	while (stack->cpy[i])
	{
		stack->a.list[*position] = ft_atoi(stack->cpy[i]);
		if (stack->a.list[*position] == -9010)
			return (-1);
		i++;
		*position++;
	}
}
// void	free_all(t_stack stack)
// {
// 	int	i;

// 	i = 0;
// 	while (i < stack->alloc)
// }