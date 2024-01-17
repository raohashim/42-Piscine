/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:59:52 by mrao              #+#    #+#             */
/*   Updated: 2023/11/09 11:43:15 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	while (i * i <= (unsigned int)nb)
	{
		if (i * i == (unsigned int)nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	int n = 2147483647; // Example: find the square root of 16
	int result = ft_sqrt(n);

	if (result == 0)
		printf("%d is an irrational number. %d \n", n, result);
	else
		printf("The square root of %d is %d.\n", n, result);

	return (0);
}