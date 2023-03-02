#include "main.h"

/**
 * _strncpy -  copies a string
 * @src: string being copied from
 * @dest: string is copied to
 * @n: number of bytes in src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
