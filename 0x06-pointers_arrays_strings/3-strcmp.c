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
 * @dest: the first parameter
 * @src: the second parameter
 * Return: char*
 */
int _strcmp(char *s1, char *s2)
{
	char *tmp;

	int i;

	int s1_ct;

	int s2_ct;

	int size;

	tmp = s2;

	s1_ct = count_it(s1);

	s2_ct = count_it(s2);

	size = s1_ct - (s2_ct < 0 ? s1_ct : s2_ct) ? s1_ct : s2_ct;

	printf("SIZE: %d\n", size);

	return size;
}
