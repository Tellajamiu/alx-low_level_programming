#include "main.h"
#include <stdio.h>


/**
 * _strncat - concatates two strings up to n bytes from the source
 * @dest: pointer to the destination to be concatated
 * @src: point to the source to be added to the source
 * @n: number of bytes from source to be concatenated
 *
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
