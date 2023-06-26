#include "main.h"

/**
 * jack_bauer - prints all minutes in a day from 00:00
 *
 * Return: Nothing.
 */

void jack_bauer(void)
{
	int i, j, m, n;

	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 9; j++)
			for (n = 0; n <= 5; n++)
				for (m = 0; m <= 9; m++)
				{
					if (i == 2 && j == 3)
						break;
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + n);
					_putchar('0' + m);
					_putchar('\n');
				}
}
