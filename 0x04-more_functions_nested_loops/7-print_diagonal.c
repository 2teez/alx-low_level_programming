#include "main.h"
/**
 * print_diagonal - prints lines diagonally
 * @n: first integer value
 * Return: void
 */

void print_diagonal(int n)
{
	int l, s;

	for (l = 0; l < n; l++)
	{
		for (s = 0; s < l; s++)
		{
			putchar(' ');
		}

		putchar('\\');

		if (l == (n - 1))
		{
			continue;
		}
		putchar('\n');
	}
	putchar('\n');
}
