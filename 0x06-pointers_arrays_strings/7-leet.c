#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @a: pointer
 * Return: encoded string
 */
char *leet(char *a)
{
	int b;
	int c;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (a[b] == letters[c])
			{
				a[b] = numbers[c];
			}
		}
	}
	return (a);
}
