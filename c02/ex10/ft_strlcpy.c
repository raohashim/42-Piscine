/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:58:35 by mrao              #+#    #+#             */
/*   Updated: 2023/10/30 15:47:11 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			c;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size < 1)
	{
		return (j);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		c = src[i];
		dest[i] = c;
		i++;
	}
	dest[i] = '\0';
	return (j);
}

int	main(void)
{
	unsigned int size = 10;
	unsigned int copied;
	char src[] = "123456789tettffssent1234";
	char *dest[size];

	

	copied = ft_strlcpy(dest, src, size);
	printf("\nCopied %u characters.\n", copied);
	printf("Copied string: %s\n", dest);

	return (0);
}