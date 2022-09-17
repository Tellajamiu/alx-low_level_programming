#include "main.h"


/**
 * print_square - print a squrae of size
 * @size: size of aquare
 *
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size); b++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
