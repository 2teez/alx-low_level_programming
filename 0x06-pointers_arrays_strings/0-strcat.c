#include "main.h"

/**
 * count_it - prints squares
 * @str: the first parameter
 * Return: void
 */
int count_it(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

/**
 * _strcat - prints squares
 * @dest: the first parameter
 * @src: the second parameter
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = src;
	int dest_ct = count_it(dest);
	int src_ct = count_it(src);
	int counter = 0;
	for (int i = dest_ct; i < (dest_ct + src_ct); i++)
	{
		dest[i] = tmp[counter];
		counter++;
	}

	return dest;
}
