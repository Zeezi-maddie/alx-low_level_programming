#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n - number of times the character \ should be printed
 * Return: diagonal line on the terminal
 */
void print_diagonal(int n)
{
	int m;
	int o;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (m = 0; m < n; m++)
		{
			for (o = 0; o < m; o++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
}
