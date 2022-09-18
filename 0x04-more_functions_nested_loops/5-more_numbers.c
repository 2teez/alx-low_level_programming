#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14, 10 times.
 * Return: void
 */

void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 63; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
