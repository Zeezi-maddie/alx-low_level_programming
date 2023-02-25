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

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		return (0);
	}
}
