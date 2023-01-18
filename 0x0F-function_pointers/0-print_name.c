#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: input name
 * @f: print name in uppercase
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL & f != NULL)
	{
		f(name);
	}
}
