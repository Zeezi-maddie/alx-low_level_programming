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

		for (int count = 0; count < 26; count++)
		{
			if (i[count] == '\0')
			{
				putchar('\n');
				break;
			}
			else
				putchar(i[count]);
		}
		return (0);
	}
		void print_alphabet(char i[]);
		return (0);
}
