#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: print the alphabet with_putchar
 *
 * Return: void
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
