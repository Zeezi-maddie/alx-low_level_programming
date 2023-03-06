#include "main.h"

/**
 * print_square -  prints a square
 * only use _putchar function to print
 * size - the size of the square
 * Return: character # to print the square
 */
void print_square(int size)
{
	int side1;
	int side2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (side1 = 1; side1 < size; side1++)
		{
			for (side2 = 2; side2 < size; side2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

