#include "main.h"

/**
 * _isdigit - function
 * @c: input integer
 * Description: check whether character is integer
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
