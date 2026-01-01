/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:50:42 by david             #+#    #+#             */
/*   Updated: 2026/01/01 17:50:15 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "printf/ft_printf.h"
# include "libft/libft.h"

typedef struct t_a
{
	int	*list;
	int	alloc;
}	t_stack_a;

typedef struct t_b
{
	int	*list;
	int	alloc;
}	t_stack_b;

typedef struct t_l
{
	t_stack_a	a;
	t_stack_b	b;
}	t_stack;

void	errors(void);
void	init(t_stack *stack);
int		count_alloc(char **av);

#endif