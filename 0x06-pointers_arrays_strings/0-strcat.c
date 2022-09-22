#include "main.h"
#include <stdio.h>


/**
 * _strcat - a function that concetates two strings
 *
 * @dest: pointer of the first position of destination
 * @src: pointer to the first position of the source
 *
 * Return: the pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];
	return (dest);
}
