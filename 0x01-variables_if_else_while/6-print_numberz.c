#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	b = 0;
	while (b < 10)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}