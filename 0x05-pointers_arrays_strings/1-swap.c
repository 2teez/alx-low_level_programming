#include "main.h"
/**
 * swap_int - prints squares
 * @a: the first parameter
 * @b: the second parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;

	*a = *b;

	*b = t;
}
