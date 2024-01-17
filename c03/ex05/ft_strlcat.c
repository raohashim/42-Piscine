/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:24:59 by mrao              #+#    #+#             */
/*   Updated: 2023/11/02 11:31:00 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	count(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	j = count(dest);
	while (src[i] != '\0')
	{
		if ((j + i) < size)
		{
			dest[j + i] = src[i];
		}
		i++;
	}
	dest[j + i] = '\0';
	return (j);
}

/* int	main(void)
{
	char dest[20] = "Hello";
	char src[] = " World";

	unsigned int result = ft_strlcat(dest, src, 8);
		// Assuming buffer size is 20

	printf("Concatenated string: %s\n", dest);
	printf("Resulting length: %u\n", result);

	return (0);
} */