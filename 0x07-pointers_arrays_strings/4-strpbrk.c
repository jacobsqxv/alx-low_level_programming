#include "main.h"

/**
 * _strpbrk - function
 * @s: memory area
 * @accept: memory area
 * Description: search string for a set of bytes
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
