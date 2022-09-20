#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - prints squares
 * @s: the first parameter
 * @c: the second parameter
 * @len: the third parameter
 * Return: void
 */

void _strncpy(char *s, char *c, int len)
{

	int i;

	for (i = 0; i < len; i++)
	{
		s[i] = c[i];
	}

	s[len] = '\0';
}

/**
 * rev_string - prints squares
 * @s: the first parameter
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char *c;

	len = _strlen(s);
	j = 0;
	c = (char *)malloc(len * sizeof(char) + 1);
	if (c != NULL)
	{
		for (i = len - 1; i >= 0; i--)
		{
			*(c + j) = *(s + i);
			j++;
		}
	}
	c[j] = '\0';
	_strncpy(s, c, len);
}

/**
 * _strlen - prints squares
 * @s: the first parameter
 * Return: void
 */

int _strlen(char *s)
{

	int count;

	count = 0;

	while (*s++)
	{
		count++;
	}

	return (count);
}
