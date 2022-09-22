#include "main.h"


/**
 * _strcat - a function to concatenate two strings
 * @dest: pointer to be appended to
 * @src: string overwriting the terminating null byte
 *
 * Return: to destination dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
