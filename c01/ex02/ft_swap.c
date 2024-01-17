/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:15:53 by mrao              #+#    #+#             */
/*   Updated: 2023/10/25 15:31:06 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 5;
	j = 3;
	a = &i;
	b = &j;
	printf("The before values are: %d %d\n\n", *a, *b);
	ft_swap(a, b);
	return (0);
	// printf("The i is: %d\n\n", i);
	// printf("The adress are: %p %p\n\n", a,b);
	// printf("The values are: %d %d\n\n", *a,*b);
}
*/
