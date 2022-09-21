#include "main.h"
#include <stdio.h>



/**
 * _strcpy - copies a strings up to n bytes
 * @dest: pointer to the destination of the copy
 * @src: source from the one n byte will be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n && src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
		while (a < n)
		{
			dest[a] = '\0';
			a++;
		}
	}
	return (dest);
}
