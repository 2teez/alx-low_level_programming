#include "main.h"
/**
 * print_diagonal - prints lines diagonally
 * @n: first integer value
 * Return: void
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
