#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - entry point
 * @a: array
 * Return: always 0 (success)
 * _putchar - output
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			putchar(a[i][n]);
		putchar('\n');
	}
}
