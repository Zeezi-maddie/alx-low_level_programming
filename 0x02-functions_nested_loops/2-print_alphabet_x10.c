#include "main.h"
/**
 * print_alphabet_x10 - Print i 10 times
 */
void print_alphabet_x10(void)
{
	int h = 0;
	char i;

	while (h <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	h++;
}
