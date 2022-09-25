#include "main.h"

/**
 * count_it - count strings
 * @str: the first parameter
 * Return: int
 */
int count_it(char *str)
{
	int count;

	count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return (count);
}

/**
 * _strncat - combine two string
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the third parameter
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp;

	int dest_ct;

	int counter;

	int i;

	tmp = src;

	dest_ct = count_it(dest);

	counter = 0;

	for (i = dest_ct; i < (dest_ct + n); i++)
	{
		dest[i] = tmp[counter];
		counter++;
	}

	return (dest);
}
