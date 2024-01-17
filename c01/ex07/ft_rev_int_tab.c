/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:06:45 by mrao              #+#    #+#             */
/*   Updated: 2023/10/26 01:34:14 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	printf("\nSize of array %d\n", size);
	while (i < j)
	{
		printf("\nSize of j %d\n", j);
		printf("\nSize of i %d\n", i);
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
 
int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7 ,8, 9 , 10, 11};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	ft_rev_int_tab(arr, size);

	printf("\nReversed array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return (0);
}