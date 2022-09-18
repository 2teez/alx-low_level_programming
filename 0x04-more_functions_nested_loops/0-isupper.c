#include "main.h"
#include <ctype.h>
/**
 * _isupper - returns 1 if upper or 0 if not
 * @c: character to check
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
