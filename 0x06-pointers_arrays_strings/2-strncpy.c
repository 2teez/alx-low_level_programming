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

	int src_ct;

	tmp = src;

	src_ct = count_it(src);

	for (i = 0; i < n; i++)
	{
		dest[i] = tmp[i];
	}

	if (src_ct < n)
	{
		for (i = src_ct; i < n - src_ct; i++)
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
