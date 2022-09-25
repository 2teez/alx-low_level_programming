#include "main.h"

/**
 * count_it - count strings
 * @str: the first parameter
 * Return: int
 */
int count_it(char *str)
{
	int count;

	count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return (count);
}

/**
 * _strcmp - combine two string
 * @s1: the first parameter
 * @s2: the second parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
	{
		return (-15);
	}
	else if (s2 > s1)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
