#include "main.h"

/**
 * _memset - function
 * @s: pointer to memory area
 * @b: bytes to fill with
 * @n: number of bytes to fill
 * Description: fill memory area with bytes
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
