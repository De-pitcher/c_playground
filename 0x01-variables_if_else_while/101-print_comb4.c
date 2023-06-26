#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	int hunds, tens, ones;

	for (hunds = 0; hunds <= 7; hunds++)
		for (tens = 0; tens <= 8; tens++)
			for (ones = 0; ones <= 9; ones++)
			{
				putchar('0' + hunds);
				putchar('0' + tens);
				putchar('0' + ones);

				if (hunds != 7 || tens != 8 || ones != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');

	return (0);
}
