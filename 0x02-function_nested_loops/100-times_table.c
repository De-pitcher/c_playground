#include "main.h"

/**
 * print_time -prints n times table
 * @n: the integer to be printed.
 *
 * Retun: Nothing.
 */

void print_times_table(int n)
{
	int a, b, calc;

	if (n >= 0 && n <= 15)
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			if (b = 0; b <= n; b++)
			{
				calc = a * b;
				_putchar(44);
				_putchar(32);
				if (calc <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(calc + 48);
				}
			}
		}
}
