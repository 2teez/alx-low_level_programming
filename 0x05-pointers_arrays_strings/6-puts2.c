#include "main.h"
/**
 * puts2 - prints squares
 * @str: the first parameter
 * Return: void
 */

void puts2(char *str)
{

	int count;

	int i;

	char *c;

	count = 0;

	c = str;

	while (*str++)
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		if ((c[i]) % 2 == 0)
		{
			_putchar(c[i]);
		}
	}
	_putchar('\n');
}
