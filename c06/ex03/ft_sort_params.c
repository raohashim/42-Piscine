/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:16:54 by mrao              #+#    #+#             */
/*   Updated: 2023/11/09 01:10:32 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compare(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	output(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*temp;

	j = 1;
	while (j < argc)
	{
		i = j;
		while (compare(argv[i], argv[i - 1]) < 0 && i > 1)
		{
			temp = argv[i - 1];
			argv[i - 1] = argv[i];
			argv[i] = temp;
			i--;
		}
		j++;
	}
	output(argc, argv);
	return (0);
}