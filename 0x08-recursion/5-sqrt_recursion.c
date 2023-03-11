#include "main.h"
#include <stdio.h>

/**
 * _sqrt - returns square root of a number
 * @n: natural square root
 * @m: input
 * Return: natural square root or -1 0therwise
 */
int _sqrt(int n, int m)
{
	if ((m * m) == n)
	{
		return (m);
	}
	else
	{
		if ((m * m) > n)
		{
			return (_sqrt(n, m + 1));
		}
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: natural square root
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}
