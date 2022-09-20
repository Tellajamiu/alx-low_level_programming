#include "main.h"
#include <stdio.h>


/**
 * swap.c - a function that swaps the value of two int
 * @a: first int to be swap with b
 * @b: the second with a
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tel;

	tel = *a;
	*a = *b;
	*b = tel;
}
