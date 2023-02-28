#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input parameter
 */
void puts_half(char *str)
{
	int h;

	h = 0;
	while (*str != '\0')
	{
		h++;
		str++;
	}
	str -= (h / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
