/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:17:23 by mrao              #+#    #+#             */
/*   Updated: 2023/11/07 19:38:58 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb = nb -1;
	}
	return (result);
}

int main (void)
{
	int a = 5;
	int b;
	b = ft_iterative_factorial(a);
	printf("Fictorial  :: %d\n", b);
}
