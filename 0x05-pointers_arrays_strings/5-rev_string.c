#include "main.h"

/**
 * rev_string - function
 * @s: input string
 * Description: print reverse characters
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0, a = 0, temp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		temp = s[i];
		s[i--] = s[a];
		s[a++] = temp;
	}
}
