#include "main.h"
#include <stdlib.h>

/**
 * str_to_cmp - count strings
 * @str: the first parameter
 * @len: the second parameter
 * Return: int
 */
static void str_to_cmp(char *str, int len)
{
	int i;

	char *tmp;

	tmp = malloc(len * sizeof(char) + 1);

	for (i = 0; i < len; ++i)
	{
		tmp[i] = str[i];
	}
	tmp[i] = '\0';

	str = tmp;
}

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

	int size;

	size = 0;

	if (count_it(s1) >= count_it(s2))
	{
		size = count_it(s2);
	}
	else
	{
		size = count_it(s1);
	}

	str_to_cmp(s1, size);
	str_to_cmp(s2, size);

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
