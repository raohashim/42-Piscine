/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:53:29 by mrao              #+#    #+#             */
/*   Updated: 2023/10/25 23:03:59 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/* int	main(void)
{
	int chr_count;
	char *ptr = "ABCDEF12345~!@£$";
	printf("The given string is :: %s\n\n", ptr);
	chr_count = ft_strlen(ptr);
	printf("The chracter count at the end in the main is :: %d", chr_count);

	// printf("The char of the string is :: %c\n\n", *str);
	// printf("The char count is :: %d\n\n", count);
		
} */