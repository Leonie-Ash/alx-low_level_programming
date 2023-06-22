#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times
 * Return: 10 times the values of numbers 0 to 14
 */

void more_numbers(void)

{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 0)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
