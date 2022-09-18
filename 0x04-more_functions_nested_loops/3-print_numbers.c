#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9, then returns void
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar(i);
		i += 1;
	}
	_putchar('\n');
}
