/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:06:38 by mrao              #+#    #+#             */
/*   Updated: 2023/10/27 00:10:58 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 97) || (str[i] > 122))
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