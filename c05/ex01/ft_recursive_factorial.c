/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:34:05 by mrao              #+#    #+#             */
/*   Updated: 2023/11/07 19:57:06 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
	 	return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int a = 10;
	int b;
	b = ft_recursive_factorial(a);
	printf("Fictorial  :: %d\n", b);
}