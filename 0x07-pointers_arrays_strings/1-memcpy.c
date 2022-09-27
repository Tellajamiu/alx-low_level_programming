#include "main.h"


/**
 * memcpy - a fuction that copies memory
 * @dest: pointer to destination of copy
 * @src: pointer to source of opy
 * @n: number of bytes of src to be copied onto dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n; i++)
	{
		dest[i] = src[i];
			--n;
	}

	return (dest);
}
