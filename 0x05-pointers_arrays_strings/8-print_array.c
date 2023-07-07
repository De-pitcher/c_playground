#include "main.h"

/**
 * print_array - print the n element of an array followed by a new line.
 * @a: array.
 * @n: input.
 *
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
