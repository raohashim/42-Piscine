/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:31:52 by mrao              #+#    #+#             */
/*   Updated: 2023/10/30 14:32:01 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	printf("Before %s \n", str);
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 33 || str[i] > 126)
		{
			printf("I ran %c\n", str[i]);
			return (0);
		}
		printf("I ran too %c\n", str[i]);
		i++;
	}
	return (1);
}

int	main(void)
{
	char str[]="";
	ft_str_is_printable(str);
	return (1);
}