#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line.
 * @str: input
 *
 * Return: Nothong.
 */

void puts_half(char *str)
{
	int len = 0, s_ind, i;

	while (str[len] != '\0')
		len++;
	s_ind = len / 2;

	for (i = s_ind; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
