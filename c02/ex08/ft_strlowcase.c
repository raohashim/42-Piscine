/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:07:10 by mrao              #+#    #+#             */
/*   Updated: 2023/10/27 21:10:20 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int count;
	char c;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			c = str[count];
			c = c + 32;
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
/* 
int	main(void)
{
	char str[] = "ABCDEFGhijklmnop87896867@£$^$    ";
	printf("String before :: %s\n\n", str);
	ft_strlowcase(str);
	printf("String after :: %s\n", str);
	return (1);
} */