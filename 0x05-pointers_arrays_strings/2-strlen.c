#include "main.h"
/**
 * _strlen - prints squares
 * @s: the first parameter
 * Return: void
 */

int _strlen(char *s)
{

	int count;

	count = 0;

	while (*s++)
	{
		count++;
	}

	return (count);
}
