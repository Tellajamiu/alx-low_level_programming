#include "main.h"
#include <string.h>
#include <stdio.h>

/**
*_puts - print a string follwed by a new line
*@str: input string to be printed
*
*Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		++str;
	}
	putchar('\n');
}
