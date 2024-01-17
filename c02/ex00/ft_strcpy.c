/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:55:43 by mrao              #+#    #+#             */
/*   Updated: 2023/10/26 22:52:12 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char source[] = "FGccjqWCcYr";
	char destination[20]; // Make sure the destination has enough space

	ft_strcpy(destination, source);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return (0);
} */