#include "main.h"


/**
 * reverse_array - reverse the content of an array
 * @a: integer of array to be reversed
 * @n: length of array a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	n = n - 1;
	while (i < n)
	{
		j = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = j;
		i++;
		n--;
	}
}

