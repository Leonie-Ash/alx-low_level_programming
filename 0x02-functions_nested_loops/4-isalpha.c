#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: The character to be checked
 * Return: 1 for alphabetic characters 0 for any other
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <=122))
	{
	return (1);
	}
	return (0);
}
