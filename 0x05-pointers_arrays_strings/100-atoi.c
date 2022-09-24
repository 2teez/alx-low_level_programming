#include "main.h"
#include <ctype.h>

/**
 * _atoi - prints squares
 * @s: the first parameter
 * Return: void
 */

int _atoi(char *s)
{
	int len;

	int i;

	len = 0;

	while (*s++)
	{
		len++;
	}

	if (len == 1 && (s[0] - '0') == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			if (isdigit(s[i]))
			{
				printf("%d", s[i] - '0');
			}
		}
		printf("\n");
	}
	return (0);
}
