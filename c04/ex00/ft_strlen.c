/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:42:07 by mrao              #+#    #+#             */
/*   Updated: 2023/11/02 11:53:44 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
		i++;
	return (i);
}

/* int	main(void)
{
	char ch[] = " ";
	int a = ft_strlen(ch);
	printf("%d", a);
	return (0);
} */