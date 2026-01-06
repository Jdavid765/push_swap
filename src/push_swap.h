/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:50:42 by david             #+#    #+#             */
/*   Updated: 2026/01/06 21:03:28 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct t_a
{
	int	*list;
	int	size;
}	t_stack_a;

typedef struct t_b
{
	int	*list;
	int	size;
}	t_stack_b;

typedef struct t_s
{
	t_stack_a	a;
	t_stack_b	b;
	int			alloc;
	char		**cpy;
}	t_stack;

void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

void	order_more_b(t_stack *stack);
void	order_more_a(t_stack *stack);
void	order_minus_a(t_stack *stack);
void	order_minus_b(t_stack *stack);
void	pb(t_stack *stack);
void	pa(t_stack *stack);

void	errors(t_stack *stack);
void	free_all(t_stack *stack);
void	ft_free(t_stack *stack);
void	init(t_stack *stack);

int		separate(t_stack *stack, char *av, int *position);
int		count_alloc_cpy(t_stack *stack, char **av);
int		count(char **all);
int		same_numbers(t_stack *stack);

#endif