#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - count strings
 * @a: the first parameter
 * @size: the second parameter
 * Return: int
 */
void print_diagsums(int *a, int size)
{
	int sum;

	int i;

	int j;

	int counter;

	sum = *(a + 0);

	counter = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (counter == size + 1)
		{
			sum += *(a + i);

			counter = 0;
		}
		counter++;
	}

	printf("%d, ", sum);

	sum = 0;

	counter = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size - 1) == 0 && i != 0)
		{
			if (counter == size)
			{
				break;
			}
			sum += *(a + i);
			counter++;
		}
	}
	printf("%d\n", sum);
}