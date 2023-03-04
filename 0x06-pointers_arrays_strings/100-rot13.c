#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @a: pointer
 * Return: *a
 */
char *rot13(char *a)
{
	int b;
	int c;

	char string1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRTSUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 52; c++)
		{
			if (a[b] == string1[c])
			{
				a[b] = rot13[c];
				break;
			}
		}
	}
	return (a);
}
