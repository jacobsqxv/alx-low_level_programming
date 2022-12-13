#include <ctype.h>
#include "main.h"

/**
 * _isalpha: function that checks for alphabetic character
 * @c: input character
 * Description: using _isalpha
 * Return: print 1 if c is letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
