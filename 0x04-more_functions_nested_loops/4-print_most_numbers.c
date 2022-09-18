#include "main.h"
/**
 * print__most_numbers - prints numbers from 0 to 9, omit 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
