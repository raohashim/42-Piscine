/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:42:52 by mrao              #+#    #+#             */
/*   Updated: 2023/10/31 21:17:37 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return 0;
	}
	if (n < 1)
	{
		return 0;
	}
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		printf("i == %d\n", i);
		printf("I ran 11111\n");
		if (i < n-1)
		{
			printf("i inside == %d\n", i);
			i++;			
		}
		else
		{
			printf("I ran\n");
			return 0;
		}
	}
	return (s1[i] - s2[i]);
}

/* int main()
{
    char s1[] = "Comparing string with different ends and n is smaller than size";
    char s2[] = "Comparing string with different ends";
    
    int result = ft_strncmp(s1, s2, 10);
    
    if (result == 0)
    {
        printf("Strings are equal\n");
    }
    else if (result < 0)
    {
        printf("s1 is less than s2\n");
    }
    else
    {
        printf("s1 is greater than s2\n");
    }
    
    return 0;
}
  */