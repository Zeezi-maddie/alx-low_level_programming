#include <stdio.h>
#include "main.h"
/**
 * main - print the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	void print_aplhabet(void);

	{
		char i;

		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
