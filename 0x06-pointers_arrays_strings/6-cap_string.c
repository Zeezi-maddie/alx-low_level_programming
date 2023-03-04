#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @a: pointer
 * Return: capitalised string
 */
char *cap_string(char *a
{
	int b = 0;

	while (a[b])
	{
	while (!(a[b] >= 'a' && a[b] <= 'z'))
	b++
	if (a[b - 1] == ' ' ||
		a[b - 1] == '\t' ||
		a[b - 1] == '\n' ||
		a[b - 1] == ',' ||
		a[b - 1] == ';' ||
		a[b - 1] == '.' ||
		a[b - 1] == '!' ||
		a[b - 1] == '?' ||
		a[b - 1] == '"' ||
		a[b - 1] == '(' ||
		a[b - 1] == ')' ||
		a[b - 1] == '{' ||
		a[b - 1] == '}' ||
		b == 0)
	a[b] -= 32;
	b++;
	}
	return (a);
}

