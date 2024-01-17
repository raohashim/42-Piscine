/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:47:54 by mrao              #+#    #+#             */
/*   Updated: 2023/11/02 20:21:16 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	cnt;
	int	neg;
	int	num;

	cnt = 0;
	neg = 0;
	num = 0;
	while (str[cnt] != '\0' && (str[cnt] == '-' || str[cnt] == '+'
			|| (str[cnt] >= 9 && str[cnt] <= 13) || str[cnt] == 32))
	{
		if (str[cnt] == '-')
		{
			neg++;
		}
		cnt++;
	}
	while (str[cnt] != '\0' && (str[cnt] >= '0' && str[cnt] <= '9'))
	{
		num = num * 10 + (str[cnt] - '0');
		cnt++;
	}
	if (neg % 2 == 1)
		num = num * -1;
	return (num);
}

int	main(void)
{
	char	c[] = "-2147483648";
	int		numb;

	printf("the input string is :: %s\n", c);
	numb = ft_atoi(c);
	printf("the output is :: %d\n", numb);
	return (0);
}
