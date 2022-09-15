#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	int j = isalpha(c);

	if (j > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
