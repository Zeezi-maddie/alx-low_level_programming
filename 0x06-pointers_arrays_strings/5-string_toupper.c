#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: pointer
 * Return: a
 */
char *string_toupper(char *a)
{
	int b = 0;

	for (b = 0; a[b] != '\0'; b++)
	{
		if (a[b] >= 'a' && a[b] <= 'z')
			a[b] = a[b] - 'a' + 'A';
	}
	return (a);
}
