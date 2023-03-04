#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input pointer
 * @n: number of elements of the array
 * Return: rerverse of the array
 */
void reverse_array(int *a, int n)
{
	int r;
	int s;

	for (s = n - 1; s >= n / 2; s--)
	{
		r = a[n - 1 - s];
		a[n - 1 - s] = a[s];
		a[s] = r;
	}
}
