/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:43:59 by david             #+#    #+#             */
/*   Updated: 2026/01/22 02:51:31 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	algo_big(t_stack *stack)
{
	search_bigger(stack);
}

void	search_bigger(t_stack *stack)
{
	int	i;
	int	bigger;
	int	c_bytes;

	i = 0;
	bigger = -111111;
	c_bytes = 0;
	while (i < stack->a.size)
	{
		if (bigger < stack->a.list[i])
			bigger = stack->a.list[i];
		i++;
	}
	count_bytes(bigger, &c_bytes);
}

void	count_bytes(int nb, int *count)
{
	if (nb < 0)
		nb *= -1;

	if (nb >= 2)
	{
		count_bytes(nb / 2, count);
		count_bytes(nb % 2, count);
		(*count)++;
	}
}
