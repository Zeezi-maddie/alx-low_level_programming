#include "main.h"
#include <stdio.h>

int _prime(int n, int m);
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: inptut integer
 * Return:  returns 1 if the input integer is a prime number
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - checks for prime number
 * @n: input
 * @m: input
 * Return: 1 if prime number otherwise 0
 */

int _prime(int n, int m)
{
	if (n <= 1)
	{
		return (0);
	}
	if ((n % m) == 0 && m > 1)
	{
		return (0);
	}
	if ((n / m) < m)
	{
		return (1);
	}
	return (_prime(n, m + 1));
}
