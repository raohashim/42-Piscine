/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:36 by mrao              #+#    #+#             */
/*   Updated: 2023/10/22 23:48:00 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_2_char(int a)
{
	int		ones;
	int		tens;
	char	c;
	char	d;

	if (a < 10)
	{
		c = '0';
		d = a + '0';
		write(1, &c, 1);
		write(1, &d, 1);
	}
	else
	{
		tens = a / 10;
		ones = a % 10;
		c = tens + '0';
		d = ones + '0';
		write(1, &c, 1);
		write(1, &d, 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			int_2_char(a);
			write(1, " ", 1);
			int_2_char(b);
			if (a < 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			b++;
		}
		a++;
	}
}
