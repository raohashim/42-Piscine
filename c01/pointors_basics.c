/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointors_basics.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrao <mrao@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:57:42 by mrao              #+#    #+#             */
/*   Updated: 2023/10/25 22:43:45 by mrao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	main(void)
{
	int	a;
	int	b;

	int*	pa;
	a = 5;
	printf("Value of int a:%d\n", a);
	printf("Value of int b:%d\n", b);
	printf("Value of pointer pa:%p\n\n", pa);
	// Lets first assign the int a to pointer pa with directly.
	// %p is used to print the pointer address
	pa = a;
	printf("Value of pointer pa after (pa = a):%p\n\n", pa);
		// The o/p will be pa =0x5, which points ot a memry address,
		not to an intiger.
	// Lets assign the pointer pa the adress of the int a
	pa = &a;
		// This is called the referencing. Here we assign the address of int a to the pointer pa. To assign the address we use the & operator also called refrencing operator.
	printf("Value of pointer pa after correctly refrensing it( pa = &a):%p\n",
		pa);
	printf("Value of the address at whcih the pointer pa is stored We can get is using the refrencing operator):%p\n",
		&pa);
	printf("Value of address at which the integer value 5 of int a is stored.:%p\n\n",
		&a);
		// we will see that the output of both of these will be same as we assign the address at where the int a is storing the 5 to the pointor.
	// Now,
		Lets derefrence the pointor. Means how to get to the actual value the address stored in the pointor is pointing to.
	// For derefrencing we use the symbol * called derefrencing operator.
	printf("Value at which the pointer pa is reffered to:%p\n\n", *pa);
		// The pointei is pointing to the memory adress of the int a and when we derefrence it we can get the value stored at that memory address.
	// The value (int a) whose address is stored in the pointor. We can also change it using the pointor defrefrencing operator.
	printf("Initial Value of int a:%d\n", a);
	*pa = 8; // If we simplyfy this statement it says derefrence the pa,
		means point to the value which at the memory address stored in the pa. pa = &a so *pa = *(&a) = a
	printf("Value of int a after (changed using the derefrensing operator):%d\n",
		a);
}
 */