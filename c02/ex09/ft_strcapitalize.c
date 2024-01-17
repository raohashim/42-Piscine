/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:36:41 by mrao              #+#    #+#             */
/*   Updated: 2023/10/30 16:28:12 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char		c;
	int		word_check;

	i = 0;
	word_check = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (word_check == 1 && c >= 97 && c <= 122)
			str[i] = str[i] - 32;
		else if (word_check == 0 && c >= 65 && c <= 90)
			str[i] = str[i] + 32;
		if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
			word_check = 1;
		else
			word_check = 0;
		i++;
	}
	return (str);
}


int	main(void)
{
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *st;
	st = c;
	printf("%s\n\n", st);

	ft_strcapitalize(st);
	printf("%s\n\n", st);
}