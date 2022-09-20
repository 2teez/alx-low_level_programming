#include "main.h"
/**
 * _puts - prints squares
 * @str: the first parameter
 * Return: void
 */

void _puts(char *str)
{
	char c;

	for (c = *str; c != '\0'; c++)
	{
		_putchar(c);
	}
}
