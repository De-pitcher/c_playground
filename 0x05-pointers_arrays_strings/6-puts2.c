#include "main.h"

/**
 * puts2 - prints some string.
 * @str: input
 *
 * Return: Nothing.
 */

void puts2(char *str)
{
	int ind = 0;

	while (str[ind] != '\0')
	{
		_putchar(str[ind]);
		ind += 2;
	}
	_putchar('\n');
}
