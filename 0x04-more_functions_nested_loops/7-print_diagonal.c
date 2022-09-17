#include "main.h"


/**
 * print_diagonal - print a diagonal lenght of n
 * @n: lenght of diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
