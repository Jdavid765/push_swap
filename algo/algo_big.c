/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canoduran <canoduran@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:43:59 by david             #+#    #+#             */
/*   Updated: 2026/02/13 18:00:24 by canoduran        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	algo_big(t_stack *stack)
{
	int	c_bytes;

	c_bytes = 0;
	sort_in_list(stack);
	count_bytes(stack->a.size - 1, &c_bytes);
	loop_algo(stack, c_bytes);
}

void	loop_algo(t_stack *stack, int c_bytes)
{
	int	i;
	int	x;
	int	size;
	int	index;

	i = 0;
	x = 0;
	index = 0;
	while (i <= c_bytes)
	{
		size = stack->a.size;
		while (x < size)
		{
			index = search_index(stack, stack->a.list[0]);
			if (((index >> i) & 1) == 1)
				ra(stack);
			else
				pb(stack);
			x++;
		}
		push_all_a(stack);
		x = 0;
		size = 0;
		i++;
	}
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
