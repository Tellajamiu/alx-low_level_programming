#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * print_rev - prints a string in reverse followed by new line
 * @s: input string
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *init = s;

	if (*s != '\0')
	{
		while (*s != '\0')
			s++;

		--s;	/*going back befor the \0 */
		while (s != init)
		{
			putchar(*s);
			--s;
		}
		putchar(*s);	/*print when *s == init */
	}
	putchar('\n');
}
