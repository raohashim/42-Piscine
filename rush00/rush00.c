/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:27:30 by csteudin          #+#    #+#             */
/*   Updated: 2023/10/22 22:06:00 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);

// this funciton is making the check if the numbers given are negative

void	check_valid(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
}

// len is for length (characters) and hgt is for height (for the new lines)

void	rush(int x, int y)
{
	char	character;
	int		len;
	int		hgt;

	check_valid(x, y);
	hgt = 1;
	while (hgt <= y)
	{
		len = 1;
		while (len <= x)
		{
			if ((len == 1 && hgt == 1) || (len == 1 && y == hgt))
				character = 'A';
			else if ((x == len && hgt == 1) || (x == len && y == hgt))
				character = 'C';
			else if ((len == 1) || (len == x) || (hgt == 1) || (hgt == y))
				character = 'B';
			else
				character = ' ';
			ft_putchar(character);
			len++;
		}
		hgt++;
		ft_putchar('\n');
	}
}
