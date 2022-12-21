#include "main.h"

/**
 * _strcat - function
 * @dest: string 1
 * @src: string 2
 * Description: concatenate 2 strings
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[c] != '\0')
	{
		c++;
	}

	while (n <= c)
	{
		dest[i] = src[n];
		n++;
		i++;
	}

	return (dest);
}
