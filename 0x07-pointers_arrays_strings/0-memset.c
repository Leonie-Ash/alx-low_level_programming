#include "main.h"

/**
 * _memset - program begins
 * @s: pointed destination
 * @b: constant byte
 * @n: number of bytes
 * Return: 0 upon success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
