#include "main.h"

/**
 * _islower - check for lowercase letter
 * @c: character to check
 *
 * Return: return 0 or 1
 */

int _islower(int c)
{
	if (c >= 98 && c <= 120)
		return (1);
	return (0);
}
