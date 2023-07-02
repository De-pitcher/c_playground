#include "main.h"

/**
 * print_most_numbers - print all the number from 0 -9 exept 2 and 4
 *
 * Return: Nothing.
 */

void print_most_numbers()
{
	char i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar('0' + i);
	_putchar('\n');
}
