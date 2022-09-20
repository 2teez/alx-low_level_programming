#include "main.h"
/**
 * rev_string - prints squares
 * @s: the first parameter
 * Return: void
 */

void rev_string(char *s)
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
	_putchar('\n');
}
