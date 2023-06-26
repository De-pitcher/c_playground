#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: Nothing.
 */

void times_table(void)
{
	int a, b, cal;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			cal = a * b;
			_putchar(44);
			_putchar(32);
			if (cal <= 9)
			{
				_putchar(32);
				_putchar(48 + cal);
			}
			else
			{
				_putchar((cal / 10) + 48);
				_putchar((cal % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
