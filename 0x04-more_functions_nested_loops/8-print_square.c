#include "main.h"
/**
 * print_square - prints squares
 * @size: size is the first parameter
 * Return: void
 */

void print_square(int size)
{

	int i;

	for (i = 0; i < size; i++)
	{
		int m;

		m = size;

		while (m > 0)
		{
			_putchar('#');
			m--;
		}
		_putchar('\n');
	}
}
