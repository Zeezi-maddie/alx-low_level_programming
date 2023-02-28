#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - Entry point
 *@n: input parameter
 *@randomPassword: function for password creation
 * Return: generates random valid passwords
 */
void randomPassword(int n)
{
	int i;

	i = 0;
	srand((unsigned int)(time(0)));
	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[n];

	random = rand() % 4;
	for (i = 0; i < n; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letters[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
int main(void)
{
	int n;

	n = 20;

	randomPassword(n);
	return (0);
}
