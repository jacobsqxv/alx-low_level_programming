#include <ctype.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c - input character
 * Description: print 0 if c is lower and 1 if c is not lower
 * Return: 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
