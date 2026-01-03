/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:50:42 by david             #+#    #+#             */
/*   Updated: 2026/01/03 21:39:39 by david            ###   ########.fr       */
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
}	t_stack_a;

typedef struct t_b
{
	int	*list;
}	t_stack_b;

typedef struct t_s
{
	t_stack_a	a;
	t_stack_b	b;
	int			alloc;
	char		**cpy;
}	t_stack;

void	errors(void);
void	init(t_stack *stack);
void	free_all(t_stack *stack);
int		separate(t_stack *stack, char *av, int *position);
int		count_alloc_cpy(t_stack *stack, char **av);
int		count(char **all);

#endif