#include <stdio.h>
#include "main.h"
/**
 * main - print the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	{
		char i[] = "abcdefghijklmnopqrstuvwxyz";

		for (int t = 0; t < 26; t++)
		{
			if (i[t] == '\0')
			{
				putchar('\n');
				break;
			}
			else
				putchar(i[t]);
		}
		return (0);
	}
		void print_alphabet(char i[]);
		return (0);
}
