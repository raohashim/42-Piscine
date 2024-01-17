/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:45:00 by mrao              #+#    #+#             */
/*   Updated: 2023/10/25 20:56:02 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;

	i = *a;
	j = *b;
	if (i < 0 || j < 1)
	{
		return ;
	}
	else
	{
		*a = i / j;
		*b = i % j;
	}
}

/* int	main(void)
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 1021;
	j = 17;
	a = &i;
	b = &j;
	printf("The value of i: %d\n", i);
	printf("Value of j: %d\n", j);
	printf("Value of pointer div:%p\n", a);
	printf("Value of pointer mod:%p\n", b);
	printf("Value of pointer div:%d\n", *a);
	printf("Value of pointer mod:%d\n\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("Value of pointer after the div:%d\n", *a);
	printf("Value of pointer after the mod:%d\n\n", *b);

	// printf("The value of i: %d\n\n", i);
	// printf("Value of j: %d\n\n", j);
	// printf("Value of pointer div:%p\n\n", a);
	// printf("Value of pointer mod:%p\n\n", b);
	// printf("I AM RUNNED \n\n");
} */
