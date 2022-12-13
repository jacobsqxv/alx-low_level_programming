#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: print 0 if islower and 1 if not lower
 * Return: 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
