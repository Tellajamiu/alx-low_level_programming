#include "main.h"
#include <string.h>
#include <stdio.h>


/**
 * _strlen - obtain the length of a string
 * @s: char pointer to the first position in string
 *
 * Return: the length as an int
 */

int _strlen(char *s)
{
	int tel = 0;

	while (*s != '\0')
	{
		s++;
		++tel;
	}
	return (tel);
}
