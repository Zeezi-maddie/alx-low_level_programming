#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: generates random valid passwords
 */
int main(void)
{
	srand(time(0));

	printf("%d\n", rand());

	return (0);
}
