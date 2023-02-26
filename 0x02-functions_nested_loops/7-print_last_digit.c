#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 *
 * Return: value of the last digit
 */
int print_last_digit(int e)
{
	int d;

	d = (e % 10);
	if (d < 0)
	{
		_putchar(-d + 0);
		return (-d);
	}
	else
	{
		_putchar(d + 0);
		return (d);
	}
}
