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

t_dict	*ft_data_extr(char *numb_file)
{
	int		i;
	int		file_dis;
	int		num;
	char	c[1];
	char	*ch_num;
	char	*ch_alpa;
	t_dict	*dict_data;
	size_t	size_of_pointer;
	int		j;

	// printf("The name of the fiel is :: %s\n", numb_file);
	i = 0;
	//	Open the file in the read only mode
	// return an int value to file descriptor
	file_dis = open(numb_file, O_RDONLY);
	// printf("The file descriptor is :: %d\n", file_dis);
	//	Check if the file is opeened correctly or not
	if (file_dis == -1)
	{
		// printf("The program will exit as the file opening fails\n");
		exit(1);
	}
	// Attempt to allocate memory for a dict_data type of dict structs with a length of 42
	//	42 as the number of data entries in the number.dict file is 42
	// Check if the allocation was successful
	dict_data = malloc(sizeof(t_dict) * 32);
	// To get the amount of memory allocated by the malloc
	size_of_pointer = sizeof(dict_data);
	// printf("Total allocated memory: %zu bytes\n", size_of_pointer * 32);
	// Memory allocation failed, exit the program with an error status
	if (!dict_data)
	{
		// printf("The program will exit as the momery allocation fails\n");
		exit(1);
	}
	// MAKE A LOOP TO ITERATE OVER ALL THE VALUES IN THE NUMBER FILE
	// TAKE EACH VALUE AND STORE THEM TO A LIST OF dict struct
	while (i < 32)
	{
		ch_num = ft_numb_from_file(file_dis);
		// printf("number as char from file: %s\n", ch_num);
		num = ft_atoi(ch_num);
		// printf("number as int at atoi: %d\n", num);
		dict_data[i].nmbr = num;
		// printf("store to dict_data arry nmbr: %d\n", dict_data[i].nmbr);
		read(file_dis, c, 1);
		// printf("Char C before :-- %c\n", c[0]);
		if (c[0] == ':')
		{
			// printf("I ran if\n");
			// printf("Char C in if :: %c\n", c[0]);
			read(file_dis, c, 1);
		}
		while (c[0] == ' ')
		{
			read(file_dis, c, 1);
			// printf("Char C in while :: %c\n", c[0]);
			// printf("I ran while\n");
		}
		// printf("Char C after while :: %c\n\n", c[0]);
		ch_alpa = ft_alpha_from_file(file_dis, c);
		// printf("Char from file after no: %s\n", ch_alpa);
		dict_data[i].nmbr_alpha = ft_strdup(ch_alpa);
		// printf("store to dict_data arry alphabet: %s\n\n", dict_data[i].nmbr_alpha);
		free(ch_alpa);
		i++;
	}
	// j = 0;
	// while (j < 32)
	// {
	// 	printf("The final dict array is %d : ", dict_data[j].nmbr);
	// 	printf("%s\n", dict_data[j].nmbr_alpha);
	// 	j++;
	// }
	close(file_dis);
	return (dict_data);
}

int	getmult(int n)
{
	if (n >= 1000000000)
		return (1000000000);
	else if (n >= 1000000)
		return (1000000);
	else if (n >= 1000)
		return (1000);
	else if (n >= 100)
		return (100);
	else if (n >= 90)
		return (90);
	else if (n >= 80)
		return (80);
	else if (n >= 70)
		return (70);
	else if (n >= 60)
		return (60);
	else if (n >= 50)
		return (50);
	else if (n >= 40)
		return (40);
	else if (n >= 30)
		return (30);
	else if (n >= 20)
		return (20);
	else if (n <= 20)
		return (n);
	else
		return (0);
}

void	output_alpha(int n, t_dict *dict_data, int *space_ptr)
{
	int	i;
	int	mult;

	i = 0;
	mult = getmult(n);
	// printf("\n\nThe output no is :- %d\n", mult);
	if(mult >=100)
		output_alpha(n/mult, dict_data, space_ptr);
	if(*space_ptr == 0)
		write(1, " ",1);
	*space_ptr = 0;
	// Find the occurance of the mult number in our list
	while(dict_data[i].nmbr != mult)
		i++;
	// Put the string value as the ouput using the putchar funciton
	ft_putstr(dict_data[i].nmbr_alpha);
	if(mult != 0 && n%mult !=0)
		output_alpha(n%mult, dict_data, space_ptr);
}

int	main(int argc, char **argv)
{
	int no;
	t_dict *dict_data;
	int space;
	int *space_ptr;

	space = 1;
	space_ptr = &space;
	if (argc == 2)
	{
		// printf("argv[0] :: %s\nargv[1]:: %s\nargv[2]:: %s\n", argv[0], argv[1],
			// argv[2]);
		no = ft_atoi(argv[1]);
		// printf("%d\n\n", no);
		if (no < 0)
		{
			write(1, "ERROR\n", 6);
			return (0);
		}
		// printf("number out side :: %d\n\n", no);
		dict_data = ft_data_extr("numbers.dict");
		output_alpha(no, dict_data, space_ptr);
	}
	return (0);
}