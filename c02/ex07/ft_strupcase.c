/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:11:40 by mrao              #+#    #+#             */
/*   Updated: 2023/10/29 20:44:05 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int		count;
	char	c;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			c = str[count];
			c = c - 32;
			str[count] = c;
			count++;
		}
		else
		{
			count++;
		}
	}
	return (str);
}

int	main(void)
{
	char str[] = "@!£$^&*(12fadlsuf      gl3456abvgashku";
	printf("String before :: %s\n\n", str);
	ft_strupcase(str);
	printf("String after :: %s\n", str);
	return (1);
}