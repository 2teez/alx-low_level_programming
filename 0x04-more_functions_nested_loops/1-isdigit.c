#include "main.h"
#include <ctype.h>
/**
 * _isdigit - returns 1 if upper or 0 if not
 * @c: character to check
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
