/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:43:59 by david             #+#    #+#             */
/*   Updated: 2026/01/22 03:28:58 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	algo_big(t_stack *stack)
{
	int	c_bytes;
	int	i;
	int	count;
	
	c_bytes = 0;
	i = 0;
	count = 0;
	search_bigger(stack, &c_bytes);
	loop_algo(stack, c_bytes, i, count);
}

void	loop_algo(t_stack *stack, int c_bytes, int i, int count)
{
	int	lower;

	lower = 0;
	while (c_bytes >= 0)
	{
		while (i < stack->a.size)
		{
			count_bytes(stack->a.list[i], &count);
			if (one_zero(stack->a.list[i], count, lower) == 0)
				pb(stack);
			else
				ra(stack);
			i++;
		}
		i = 0;
		lower++;
		push_all_a(stack);
		c_bytes--;
	}
}

int	one_zero(int nb, int count, int lower)
{
	count = count - lower;
	if (nb < 0)
		nb *= -1;
	while (count > 0)
	{
		nb /= 2;
		count--;
	}
	nb %= 2;
	if (nb == 0)
		return (0);
	else
		return (1);
}

void	search_bigger(t_stack *stack, int *c_bytes)
{
	int	i;
	int	bigger;

	i = 0;
	bigger = -111111;
	while (i < stack->a.size)
	{
		if (bigger < stack->a.list[i])
			bigger = stack->a.list[i];
		i++;
	}
	count_bytes(bigger, c_bytes);
}

void	count_bytes(int nb, int *count)
{
	if (nb < 0)
		nb *= -1;

	if (nb >= 2)
	{
		count_bytes(nb / 2, count);
		(*count)++;
	}
}
