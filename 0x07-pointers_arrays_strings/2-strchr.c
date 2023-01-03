#include "main.h"

/**
 * _strchr - function
 * @s: memory area
 * @c: memory area
 * Description: locate character in string
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
