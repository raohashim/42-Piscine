/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:56:33 by mrao              #+#    #+#             */
/*   Updated: 2023/10/25 22:44:38 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	chr;

	while (*str != '\0')
	{
		chr = *str;
		write(1, &chr, 1);
		str++;
	}
}

/*
int	main(void)
{
	// char c[8] = "abcdef";
	char *str = "abcdef123156464`1';[]";

	// str = c;
	// printf("The string is :: %p\n\n", c);
	// printf("The address of the string is :: %p ,
		and the value it stores is ::%s\n\n", str, str);
	ft_putstr(str);
	return (0);
	// printf("The value of the str address :: %p, value :: %c \n", str, *str);
	// printf("The value of the CHR :: %d \n", chr);
	// printf("\n\nThe value of str :: %c\n", chr);
} */