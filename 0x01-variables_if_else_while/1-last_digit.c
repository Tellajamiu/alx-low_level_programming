#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	r = n % 10;
	if (r > 5)
	{
		printf("last digit of %i is %i and is greatet than 5\n", n, r);
	}
	else if (r == 0)
	{
		printf("last digit of %i is %i and is 0\n", n, r);
	}
	else
	{
		printf("last digit of %i is %i and is less than 6 not 0\n", n, r);
	}

	return (0);
}
