#include "main.h"


/**
 * print_line - print an underscore n times
 * @n: number of times printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
