#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination of value copied
 * @src: where value was copied from
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
