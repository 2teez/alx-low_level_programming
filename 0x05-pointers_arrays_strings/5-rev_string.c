#include "main.h"
/**
 * rev_string - prints squares
 * @s: the first parameter
 * Return: void
 */

void rev_string(char *s)
{
	int len;

	int i;

	char *c;

	len = _strlen(s);

	c = s;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(c[i]);
	}
	*s = c[i];
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
