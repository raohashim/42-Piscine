/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_exract.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:53:17 by mrao              #+#    #+#             */
/*   Updated: 2023/11/06 19:04:40 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void		ft_putstr(char *str);
int			ft_atoi(char *str);
char		*ft_strdup(char *ch_alpa);
char		*ft_numb_from_file(int file_dis);
char		*ft_alpha_from_file(int file_dis, char *c);

typedef struct dict
{
	int		nmbr;
	char	*nmbr_alpha;
}			t_dict;

int	open_file(char *numb_file)
{
	int	file_dis;

	file_dis = open(numb_file, O_RDONLY);
	if (file_dis == -1)
	{
		exit(1);
	}
	return (file_dis);
}

t_dict	*size_alloc(void)
{
	t_dict	*mem;

	mem = malloc(sizeof(t_dict) * 32);
	if (!mem)
		exit(1);
	return (mem);
}

t_dict	*ft_data_extr(char *numb_file)
{
	int		i;
	int		file_dis;
	char	c[1];
	char	*ch_alpha;
	t_dict	*dict_data;

	i = -1;
	file_dis = open_file(numb_file);
	// printf("\n\nFile Descriptor :: %d\n", file_dis);
	dict_data = size_alloc();
	while (++i < 32)
	{
		dict_data[i].nmbr = ft_atoi(ft_numb_from_file(file_dis));
		read(file_dis, c, 1);
		while (c[0] == ' ')
		{
			// printf("\n\nI am space befor :\n\n");
			read(file_dis, c, 1);
		}
		if (c[0] == ':')
		{
			// printf("\n\nI am collon:: :\n\n");
			read(file_dis, c, 1);
		}
		while (c[0] == ' ')
		{
			// printf("\n\nI am space after :\n\n");
			read(file_dis, c, 1);
		}
		ch_alpha = ft_alpha_from_file(file_dis, c);
		dict_data[i].nmbr_alpha = ft_strdup(ch_alpha);
		free(ch_alpha);
	}
	// printf("The final dict array is\n");
	
	close(file_dis);
	return (dict_data);
}

int	error(void)
{
	write(1, "ERROR\n", 6);
	exit(1);
}

int	dict_error(void)
{
	write(1, "Dict Error\n", 11);
	exit(1);
}
