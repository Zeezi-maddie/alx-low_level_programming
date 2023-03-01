#include "main.h"

/**
 *  puts2 -  prints every other character of a string
 *  @str: input
 *  Return: print string
 */
void puts2(char *str)
{
	int p;
	int q;

	q = 0;
	while (str[q] != '\0')
	{
		q++;
	}
	for (p = 0; p < q; p += 2)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
