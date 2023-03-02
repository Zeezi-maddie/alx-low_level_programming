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

	for (r = 0; r < n; r++)
	{
		s = a[r];
		a[r] = a[n];
		a[n] = s;
	}
}
