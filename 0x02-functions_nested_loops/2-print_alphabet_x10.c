#include "main.h"
/**
 * print_alphabet_x10 - Print i 10 times
 */
void print_alphabet_x10(void)
{
	int h;
	char i;

	for  (h = 0; h <= 10; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	}
	_putchar('\n');
}
