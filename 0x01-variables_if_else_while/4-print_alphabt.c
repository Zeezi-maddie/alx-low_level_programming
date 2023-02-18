#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char no = 'a';

	while (no <= 'z')
	{
		if (no != 'e' && no != 'q')
		{
			putchar(no);
		}
		no++;
	}
	putchar('\n');
	return (0);
}
