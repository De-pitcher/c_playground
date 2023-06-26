#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase for 10 time
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;


	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
