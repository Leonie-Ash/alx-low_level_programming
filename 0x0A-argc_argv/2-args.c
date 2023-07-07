#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments content
 * @arg: argument count
 * @argv: argument vector
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
