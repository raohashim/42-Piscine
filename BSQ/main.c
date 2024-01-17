/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohrahma <mohrahma@student.42.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:53:54 by mohrahma          #+#    #+#             */
/*   Updated: 2023/11/07 18:51:00 by mohrahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	is_value_free(int **grid, int row, int col)
{
	if (grid[row] == 0 || *grid[col] == 0)
		return (0);
	return (1);
}

void	print_res(char **result)
{
	int	i;
	int	j;

	i = 0;
	while (i < 11)
	{
		printf("%s\n", result[i]);
		i++;
	}
}

char	**edit_borders(char **result)
{
	int	i;
	int	j;
	int k;

	i = 0;
	while (i < 10)
	{
		if (result[0][i] == '1')
			result[0][i] = '2';
		if (result[9][i] == '1')
			result[9][i] = '2';
		if (result[i][0] == '1')
			result[i][0] = '2';
		if (result[i][9] == '1')
			result[i][9] = '2';
		j = 0;
		while (j < 10)
		{
			if (result[i][j] == '0')
			{
				k = 0;
				while (k < 10)
				{
					result[i][k] = '3';
					result[k][i] = '3';
					k++;
				}
				result[i][j] = '0';
			}
			j++;
		}
		i++;
	}
	return (result);
}

char	**move_vals(char *buffer, char **result, int file_bytes)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	i++;
	j = 0;
	k = 0;
	while (i < file_bytes)
	{
		if (buffer[i] == '.')
		{
			result[j][k] = '1';
			k++;
		}
		if (buffer[i] == 'o')
		{
			result[j][k] = '0';
			k++;
		}
		if (buffer[i] == '\n')
		{
			j++;
			k = 0;
		}
		i++;
	}
	return (result);
}

char	**create_array(void)
{
	char	**result;
	int		i;

	result = malloc(11 * sizeof(char *));
	i = 0;
	while (i < 11)
	{
		result[i] = malloc(50 * sizeof(char *));
		i++;
	}
	return (result);
}

void	free_array(char **result)
{
	int	i;

	i = 0;
	while (i < 11)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

void	read_file(int file_id)
{
	char	*buffer;
	int		size;
	int		file_size;
	char	**result;

	buffer = malloc(1024);
	size = 1024;
	result = create_array();
	file_size = read(file_id, buffer, size);
	move_vals(buffer, result, file_size);
	edit_borders(result);
	print_res(result);
	free_array(result);
}

int	main(int argc, char **argv)
{
	int	fd;

	fd = open("grid", O_RDONLY);
	read_file(fd);
}
