/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:55:26 by mrao              #+#    #+#             */
/*   Updated: 2023/10/30 14:24:44 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char	c;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		c = src[i];
		dest[i] =c;
		i++;
	}
	while (i < n)
	{
		printf("I ran\n");
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	unsigned int	n=20;
	char	a[] = "123qwe;;;";
	char des[20];

	char* dest;
	char* src;
	src=a;
	dest=des;
	ft_strncpy(dest, src, n);
	printf("Source: %s\n", src);
   printf("Destination: %s\n", dest);


}