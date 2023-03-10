#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input integer
 * Return: -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		factorial(n);
		return (n * factorial(n - 1));
	}
}
