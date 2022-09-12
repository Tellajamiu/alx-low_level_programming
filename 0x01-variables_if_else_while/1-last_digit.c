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
		printf("last digit of 98 is 8 and is greatet than 5");
	}
	else if (r == 0)
	{
		printf("last digit of - 98 is - 8 and is less than 6 not 0");
	}
	else
	{
		printf("last digit of 980 is 0 and is 0");
	}

	return (0);
}
