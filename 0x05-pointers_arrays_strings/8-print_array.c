#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n: input
 * @a: initial pointeer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d, ", a[c]);
	if (c != (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	}
	printf("\n");
}
