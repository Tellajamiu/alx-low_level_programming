#include "main.h"


/**
 * print_triangle - print a triangle of sizr
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		putchar('\n');
	for (a = 1; b <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= (size - a))
				putchar(' ');
			else
				putchar('#');
		}
		putchar('\n');
	}
}
