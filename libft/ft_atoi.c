/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourlogin <youremail@student.42lausanne.ch>    +#+  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:35:36 by yourlogin         #+#    #+#             */
/*   Updated: 2025/10/17 10:35:36 by yourlogin        ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	void	loop_number(const char *nptr, int *x, int *res, int *count)
{
	while (nptr[*x] >= 48 && nptr[*x] <= 57)
	{
		(*res) = (*res) * 10 + (nptr[*x] - '0');
		(*x)++;
		(*count)++;
	}
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	x;
	int	min;
	int	count_number;

	x = 0;
	res = 0;
	min = 1;
	count_number = 0;
	while (nptr[x] == 32 || (nptr[x] >= 9 && nptr[x] <= 13))
		x++;
	if (nptr[x] == '-' || nptr[x] == '+')
	{
		if (nptr[x] == '-')
			min *= -1;
		x++;
	}
	loop_number(nptr, &x, &res, &count_number);
	if (count_number == 0 && nptr[x] == '\0')
		return (-9010);
	if (nptr[x] != '\0')
		return (-9010);
	return (res * min);
}

// #include "stdio.h"
// int main(int ac, char **av)

// 	printf("%d", ft_atoi(av[1]));
// }{