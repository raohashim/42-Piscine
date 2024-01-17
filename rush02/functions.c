#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct dict
{
	int		nmbr;
	char	*nmbr_alpha;
}			t_dict;

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	cnt;
	int	neg;
	int	num;

	cnt = 0;
	neg = 0;
	num = 0;
	while (str[cnt] != '\0' && (str[cnt] == '-' || str[cnt] == '+'
			|| (str[cnt] >= 9 && str[cnt] <= 13) || str[cnt] == 32))
	{
		if (str[cnt] == '-')
		{
			neg++;
		}
		cnt++;
	}
	while (str[cnt] != '\0' && (str[cnt] >= '0' && str[cnt] <= '9'))
	{
		num = num * 10 + (str[cnt] - '0');
		cnt++;
	}
	if (neg % 2 == 1)
		num = num * -1;
	return (num);
}

char	*ft_strdup(char *ch_alpa)
{
	// printf("ft_strdup the input is -: %s\n", ch_alpa);
	char	*dst;
	int		len;
	int		i;

	i = 0;
	// Find the length of the source string
	len = 0;
	while (ch_alpa[len] != '\0')
	{
		len++;
	}
	// printf("ft_strdup the input length is -: %d\n", len);
	// Allocate memory for the destination string
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
	{
		printf("Memory allocation faield");
		return (0); // Memory allocation failed
	}
	// Copy the characters from src to dst
	while (ch_alpa[i] != '\0')
	{
		// printf("The ch_alpha inside the while loop : %c\n", ch_alpa[i]);
		dst[i] = ch_alpa[i];
		// printf("The dst inside the while loop : %c\n\n", dst[i]);
		i++;
	}
	// printf("The dst string after the while: %s\n\n", dst);

	// *dst = '\n'; // Null-terminate the destination string
	return (dst);
}

char	*ft_numb_from_file(int file_dis)
{
	int		i;
	char	c[1];
	char	*ch;

	i = 0;
	// Assign the memory of char size
	// allocate memory for a string of 128 characters.
	ch = malloc(sizeof(char) * 128);
	// Memory allocation failed, exit the program with an error status
	if (!ch)
	{
		// printf("The program will exit as the momery allocation fails\n");
		exit(1);
	}
	// TO read data from the file descriptor
	// Syntex read(file descriptor, buffer to store data,	number of bytes to read)
	read(file_dis, c, 1);
	// printf("Char C :: %c\n\n",c[0]);
	while (c[0] == '\n')
	{	
		read(file_dis, c, 1);
		// printf("Char C in first while until new line :: %c\n\n",c[0]);
	}

	while (c[0] >= '0' && c[0] <= '9')
	{
		// printf("String ch in the while loop :: %c\n\n",ch[i]);
		ch[i] = c[0];
		// printf("Char C :: %c\n\n",c[0]);
		read(file_dis, c, 1);
		// printf("Char C the next number  :: %c\n\n",c[0]);
		i++;
	}
	// printf("String Char C :: %s\n\n",ch);

	return (ch);
}
char	*ft_alpha_from_file(int file_dis, char *c)
{
	int i;
	char *ch;

	i = 0;
	// Assign the memory of char size
	ch = malloc(sizeof(char) * 128);
	if (!ch)
	{
		// printf("The program will exit as the momery allocation fails\n");
		exit(1);
	}
	while (c[0] != '\n')
	{
		// printf("Char C input to while in ft_alpha_from_file funct :: %c\n",c[0]);
		ch[i] = c[0];
		read(file_dis, c, 1);
		i++;
	}
	return (ch);
}	
