#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 *@e: input
 * Return: value of the last digit
 */
int print_last_digit(int e)
{
	int d;

	d = (e % 10);
	if (d < 0)
	{
		_putchar(-d + 48);
		return (-d);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
}
