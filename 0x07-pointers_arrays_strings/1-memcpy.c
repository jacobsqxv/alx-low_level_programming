#include "main.h"

/**
 * _memcpy - function
 * @dest: memory area
 * @src: memory area
 * @n: size
 * Description: copy bytes in memory area
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
