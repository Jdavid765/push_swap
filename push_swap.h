/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 04:50:42 by david             #+#    #+#             */
/*   Updated: 2026/01/01 05:35:06 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <unistd.h>
# include <stdlib.h>
# include "printf/ft_printf.h"
# include "libft/libft.h"

typedef	struct s_a
{
	int	list;
}	stack_a;

typedef	struct s_b
{
	int	list;
}	stack_b;

typedef	struct s_l
{
	stack_a	a;
	stack_b b;
}	t_stack;

void errors(void);
#endif