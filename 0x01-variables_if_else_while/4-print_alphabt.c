#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program entry point
 * Return: Always 0 (Success)
 */
int main(void)

{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar('\n');
	}
	putchar('\n');
	return (0);
}
