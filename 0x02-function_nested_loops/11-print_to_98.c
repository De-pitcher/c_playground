#include <stdio.h>

/**
 * print_to_98 - prints from n up to 98
 * @n: input.
 *
 * Return: n up to 98.
 */

void print_to_98(int n)
{
	if (n > 98)
		for (; n > 98; n--)
			printf("%d, ", n);
	else if (n < 98)
		for (; n < 98; n++)
			printf("%d, ", n);
	printf("%d\n", n);
}
