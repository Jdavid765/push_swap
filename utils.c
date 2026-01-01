/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 05:33:45 by david             #+#    #+#             */
/*   Updated: 2026/01/01 19:36:09 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errors(void)
{
	ft_printf("Error idiot\n");
	exit(1);
}

int	count_alloc(char **av)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (av[i])
	{
		count++;
		i++;
	}
	return (count);
}
