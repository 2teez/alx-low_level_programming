#include "main.h"
/**
 * puts_half - prints squares
 * @str: the first parameter
 * Return: void
 */

void puts_half(char *str)
{

	int length_of_the_string;

	int i;

	int n;

	char *c;

	length_of_the_string = 0;

	c = str;

	while (*str++)
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	{
		n = length_of_the_string / 2;
		for (i = n; i < length_of_the_string; i++)
		{
			_putchar(c[i]);
		}
	}

	_putchar('\n');
}
