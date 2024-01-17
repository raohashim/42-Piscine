/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:31:21 by mrao              #+#    #+#             */
/*   Updated: 2023/10/25 20:44:45 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a < 0 || b < 1)
	{
		return ;
	}
	else
	{
		*div = a / b;
		*mod = a % b;
	}
}

/* int	main(void)
{
	int a;
	int b;
	int di;
	int mo;
	int *div;
	int *mod;

	a = 170000512;
	b = 10;
	div = &di;
	mod = &mo;
	ft_div_mod(a, b, div, mod);
	// printf("The value of a:%d\n\n", a);
	// printf("Value of b:%d\n\n", b);
	// printf("Value of pointer div:%p\n\n", div);
	// printf("Value of pointer mod:%p\n\n", mod);
	// printf("Value stored in pointer div:%d\n\n", *div);
	// printf("Value stored in pointer mod:%d\n\n", *mod);

	// printf("This loop is executed");

	// printf("Value stored in pointer after div:%d\n\n", *div);
	// printf("Value stored in pointer after mod:%d\n\n", *mod);
	return (0);
} */