#include "main.h"

/**
 * print_rev - prints the reverse of the string.
 * @s: input.
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');


}
