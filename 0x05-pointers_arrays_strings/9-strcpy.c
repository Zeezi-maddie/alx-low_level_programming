#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 *@src: copies string from it
 *@dest: copies string to it
 *Return:  the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int s;

	s = 0;
	while (*(src + s) != '\0')
	{
		*(dest + s) = *(src + s);
		s++;
	}
	*(dest + s) = '\0';
	return (dest);
}
