#include <stdio.h>

/**
 * _strlen - outputs length of a string
 * @str: string the length is obtained
 * Return: the lenth of str
 */

size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
