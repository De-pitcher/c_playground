#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	int tens, ones;

	for (tens = 0; tens <= 8; tens++)
		for (ones = 0; ones <= 9; ones++)
		{
			putchar('0' + tens);
			putchar('0' + ones);

			if (tens != 8 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');

	return (0);
}
