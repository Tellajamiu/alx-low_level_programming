#include "main.h"


/**
 * print_last_digit - print the last digit num
 * @n: is the number that we will take and return its last digit.
 *
 * Return: r
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r *= -1;
	_putchar('0' + r);
	return (r);
}
