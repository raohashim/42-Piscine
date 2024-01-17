/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:00:18 by mrao              #+#    #+#             */
/*   Updated: 2023/11/07 20:12:44 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result = result * nb;
			power = power - 1;
		}
		return (result);
	}
}

int	main(void)
{
	int a = 2;
	int p = 4;
	int b;
	b = ft_iterative_power(a, p);
	printf("result  :: %d\n", b);
}