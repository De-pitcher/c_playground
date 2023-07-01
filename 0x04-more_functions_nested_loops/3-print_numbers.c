#include "main.h"

/**
 * print_numbers - prints the number fomr 0 - 9
 *
 * Return: Nothing.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}
