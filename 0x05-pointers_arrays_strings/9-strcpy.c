#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - prints squares
 * @dest: the first parameter
 * @src: the second parameter
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	int len;

	len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{

		*(dest + i) = src[i];
	}
	return (dest);
}
