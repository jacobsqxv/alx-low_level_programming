#include "main.h"
#include <stdlib.h>

/**
 * _abs - entry point
 * @i: input character
 * Description: print absolute value of integer
 * Return: 0
 */

int _abs(int i)
{
	i = abs(i);
	_putchar(i + '0');
	return (0);
}
