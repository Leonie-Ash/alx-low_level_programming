#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed out
 * Return: 1 on success, -1 on error and error number is appropriately
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
