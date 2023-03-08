#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: first bytes of memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; 0 < n; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
