#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - function
 * @c: input integer
 * Description: check whether character is integer
 * Return: 0 or 1
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
