#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char r = s[0];
	int t = 0;
	int u;

	while (s[t] != '\0')
	{
		t++;
	}
	for (u = 0; u < t; u++)
	{
		t--;
		r = s[u];
		s[u] = s[t];
		s[t] = r;
	}
}
