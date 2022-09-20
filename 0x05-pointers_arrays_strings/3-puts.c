#include "main.h"
/**
 * _puts - prints squares
 * @str: the first parameter
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
