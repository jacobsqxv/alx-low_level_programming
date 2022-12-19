#include "main.h"

/**
 * puts2 - function
 * @str: input string
 * Description: print string, jump 2 characters
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
