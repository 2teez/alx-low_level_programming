#include "main.h"
/**
 * print_rev - prints squares
 * @s: the first parameter
 * Return: void
 */

void print_rev(char *s)
{

	char *c;

	c = s;
	while (*s++)
		;
	s--;
	while (s--)
	{
		_putchar(*s);
		if (c == s)
		{
			break;
		}
	}
}
