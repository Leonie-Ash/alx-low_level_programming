#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string printed in reverse
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
