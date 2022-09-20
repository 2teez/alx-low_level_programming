#include "main.h"
/**
 * print_array - prints squares
 * @str: the first parameter
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	putchar('\n');
}