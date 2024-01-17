/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:18:06 by mrao              #+#    #+#             */
/*   Updated: 2023/10/31 22:12:15 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	if (src == NULL || dest == NULL)
	{
		return (0);
	}
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		c = src[i];
		dest[j] = c;
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/* int main(void)
{
	char s1[] = "abcdef";
   char s2[] = "12345";
	ft_strcat(s2,s1);
	// printf("The destination is ::::  %s\n", s2);

} */