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

	return count;
}

/**
 * _strcat - combine two string
 * @dest: the first parameter
 * @src: the second parameter
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
	char *tmp;

	int dest_ct;

	int src_ct;

	int counter;

	int i;

	tmp = src;

	dest_ct = count_it(dest);

	src_ct = count_it(src);

	counter = 0;

	for (i = dest_ct; i < (dest_ct + src_ct); i++)
	{
		dest[i] = tmp[counter];
		counter++;
	}

	return dest;
}
