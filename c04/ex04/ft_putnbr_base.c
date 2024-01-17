/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:45:27 by mrao              #+#    #+#             */
/*   Updated: 2023/11/07 15:24:47 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_char(char c)
{
	write(1, &c, 1);
}

int	base_conv(int nbr, int base_id)
{
	int	no;
	int	remainder;
	int	f;

	no = 0;
	f = 1;
	while (nbr != 0)
	{
		remainder = nbr % base_id;
		// printf("remainder :: %d\n", remainder);
		no = no + remainder * f;
		// printf("no :: %d\n", no);
		f = f * 10;
		// printf("f :: %d\n", f);
		nbr = nbr / base_id;
		// printf("nbr :: %d\n\n", nbr);
	}
	printf("%d\n", no);
	return (no);
}

int	check(char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		c = base[i];
		if (c == '-' || c == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (c == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	id_base;
	int	i;
	int	conv_no;

	i = 0;
	id_base = check(base);
	// printf("The base id :: %d\n", id_base);
	if (id_base == 2 || id_base == 8 || id_base == 10 || id_base == 16)
		conv_no = base_conv(nbr, id_base);
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	else
		return ;
}

// 	if (nbr < 0)
// 	{
// 		temp *= -1;
// 		ft_putchar('-');
// 	}
// 	ft_output(temp, base);

// int	main(void)
// {
// 	int nbr = 564564;
// 	char base[] = "0123456789ABCDEF";
// 	ft_putnbr_base(nbr, base);
// 	return (0);
// }