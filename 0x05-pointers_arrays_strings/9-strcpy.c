#include "main.h"

/**
 * _strcpy - function
 * @dest: destination character
 * @src: source character
 * Description: copy string to another destination
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
