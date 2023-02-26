#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *@n: starting number
 *Numbers must be separated by a comma
 *Numbers should be printed in order
 * last printed number should be 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}

