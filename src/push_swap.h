/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:50:42 by david             #+#    #+#             */
/*   Updated: 2026/01/22 21:51:02 by david            ###   ########.fr       */
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

typedef struct t_sort
{
	int	*list;
	int	size;
}	t_sorted;

typedef struct t_s
{
	t_stack_a	a;
	t_stack_b	b;
	t_sorted	sorted;
	int			alloc;
	char		**cpy;
	int			instructions;
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

void	choose_algo(t_stack *stack);

void	algo_small(t_stack *stack);
void	for_two(t_stack *stack);
void	for_tree(t_stack *stack);
void	for_four(t_stack *stack);
void	push_min_to_b(t_stack *stack);

void	good_orders(t_stack *stack);
void	orders(t_stack *stack);

void	algo_big(t_stack *stack);
void	count_bytes(int nb, int *count);
void	loop_algo(t_stack *stack, int c_bytes);
void	push_all_a(t_stack *stack);
void	sort_in_list(t_stack *stack);
void	loop_sorted_in_list(t_stack *stack, int i, int j);
int		search_index(t_stack *stack, int nb);

#endif