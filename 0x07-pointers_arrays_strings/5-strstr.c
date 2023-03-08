#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		a = 0;
		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return ('\0');
}
