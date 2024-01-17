/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:06:38 by mrao              #+#    #+#             */
/*   Updated: 2023/10/27 00:10:30 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
/* 
int	main(void)
{
	char str[]="abcde22ßfghIUYTRDFGTFG";
	ft_str_is_alpha(str);
} */