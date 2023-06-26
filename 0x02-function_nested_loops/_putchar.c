#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: The character to be printed.
 * Return: on success 1
 * On error, -1 is return and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
