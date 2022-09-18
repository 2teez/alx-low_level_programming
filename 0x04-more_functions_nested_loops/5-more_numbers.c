#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14, 10 times.
 * Return: void
 */

void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 48; j < 62; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
