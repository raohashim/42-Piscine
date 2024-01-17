/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:13:02 by mrao              #+#    #+#             */
/*   Updated: 2023/11/02 11:27:58 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	count(char *str)
{
	unsigned int	i;

	i =0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	char			c;

	i = 0;
	j = 0;
	if (nb < 1)
	{
		return (dest);
	}
	j = count(dest);
	while (src[i] != '\0' && i < nb)
	{
		c = src[i];
		dest[j] = c;
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/* int	main(void)
{
	char s1[] = "abcdef";
	char s2[] = "12345";
	unsigned int n = 3;
	ft_strncat(s2, s1, n);
	printf("The destination is ::::  %s\n", s2);
} */