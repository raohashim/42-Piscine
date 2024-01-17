/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 01:38:00 by mrao              #+#    #+#             */
/*   Updated: 2023/10/26 02:12:06 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int arr[] = {2, 100, 1, 99, 4, 3, 8, 88, 100, 63, -11, 0, 55, -9999, 11};
	int size = sizeof(arr) / sizeof(arr[0]);

	ft_sort_int_tab(arr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return (0);
}