#include "main.h"
/**
 * print_rev - prints squares
 * @s: the first parameter
 * Return: void
 */

void print_rev(char *s)
{

	/*
	 *	char *c;
	 *
	 *	c = s;
	 *
	 *	while (*s++)
	 *		;
	 *	while (s--)
	 *	{
	 *		_putchar(*s);
	 *		if (c == s)
	 *		{
	 *			break;
	 *		}
	 *	}
	 */
	int len;

	int i;

	len = _strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
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
