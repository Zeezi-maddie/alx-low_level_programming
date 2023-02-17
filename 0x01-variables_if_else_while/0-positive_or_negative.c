#include < stdlib.h >
#include < time.h >
#include < stdio.h >
/**
 * main - Print whether the number is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{		/* if condition is true then print the following */
		printf("%d is positive\n", n);
	}
	else if (n == 0) 
	{		/* if condition is true */
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
