#include "main.h"
/**
 * print_line - prints numbers from 0 to 14, 10 times.
 * @n: first integer value
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
