#include "main.h"

/**
 * print_triangle - prints triangles.
 * @size: Size of the triangle to be printed.
 *
 * Return: Nothing.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < (size - i -1))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
