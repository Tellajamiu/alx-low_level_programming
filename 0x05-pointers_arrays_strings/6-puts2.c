#include "main.h"
#include <stdio.h>


/**
 * puts2 - prints every other character on input string
 * @str: input string
 *
 * Return: void
 */

void puts2(char *str)
{
	int count;
	int i = 0;

	while (*(str + count) != '\0')
		++count;
	while (i < count)
	{
		putchar(*(str + i));
		i = 1 + 2;
	}
	putchar('\n');
}
