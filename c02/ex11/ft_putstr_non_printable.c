/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:31:20 by mrao              #+#    #+#             */
/*   Updated: 2023/10/30 18:39:55 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			*base;
	int				temp;
	int				temp2;

	i = 0;
	base = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			c = str[i];
			write(1, "\\", 1);
			printf("\ni am %x\n", c);
			printf("base %c\n", base[c/16]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (1);
}