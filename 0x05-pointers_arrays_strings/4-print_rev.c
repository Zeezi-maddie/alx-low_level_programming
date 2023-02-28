#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: charactr string
 * Return: void
 */
void print_rev(char *s)
{
	int t;

	t = 0;
	while (s[t] != '\0')
	{
		t++;
	}
	for (t = t - 1; t >= 0; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}
