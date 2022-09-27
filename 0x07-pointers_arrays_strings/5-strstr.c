#include "main.h"



/**
 * _strstr - finds the first ocurrence of a substring in a string
 * @haystack: pointer to string to be searched
 * @needle: substring to be found in haystack
 *
 * Return: pointer to beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			j++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
