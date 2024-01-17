/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:00:08 by mrao              #+#    #+#             */
/*   Updated: 2023/11/02 17:54:17 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char c)
{
	write(1, &c, 1);
}

int	conv(int nb)
{
	int	tens;

	tens = 0;
	tens = nb / 10;
	return (tens);
}

void	ft_putnbr(int nb)
{
	int	tens;
	int	ones;

	tens = 0;
	ones = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write_char('-');
			nb = nb * -1;
		}
		if (nb > 9)
		{
			tens = conv(nb);
			ft_putnbr(tens);
		}
		ones = nb % 10;
		write_char(ones + '0');
	}
}

/* int	main(void)
{
	int a = 123;
	ft_putnbr(a);
	return (0);
} */