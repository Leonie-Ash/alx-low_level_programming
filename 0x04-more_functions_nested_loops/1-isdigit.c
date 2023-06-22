#include "main.h"

/**
 * _isdigit - check if a number is a digit
 * @x: number to be checked
 * Return: 1 for digit 0 for any other
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
