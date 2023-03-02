#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @src: string to append to dest
 * @dest: string being appended
 * @n: number of bytes from src
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
