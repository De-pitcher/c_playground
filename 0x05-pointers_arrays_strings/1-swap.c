#include "main.h"

/**
 * swap_int - swaps the value of a and b.
 * @a: input.
 * @b: input.
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
