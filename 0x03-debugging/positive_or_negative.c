#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Determines if a number is positive, negative or zero.
 * Return: 0 (Success)
 * if number is greater than 0: is positive, if number is 0: is zero
 * if number is less than 0: is negative,followed by a new line
 * @i: interger
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
