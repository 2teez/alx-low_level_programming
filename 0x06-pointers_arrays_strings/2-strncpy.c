#include "main.h"

/**
 * _strncpy - combine two string
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the third parameter
 * Return: char*
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp;

	int i;

	tmp = src;

	for (i = 0; i < n; i++)
	{
		dest[i] = tmp[i];
	}

	return (dest);
}
