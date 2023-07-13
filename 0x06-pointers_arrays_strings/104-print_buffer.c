#include "main.h"

/**
 * print_buffer - prints a buffer.
 * @b: pointer to the string.
 * @size: size of the string.
 *
 * Return: Noting.
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j += 2)
			if (j < size)
				printf("%02x%02x ", b[j], b[j + 1]);
			else
				printf("     ");
		printf(" ");

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				if (isprint(b[j]))
					printf("%c",b[j]);
				else
					printf(".");
			else
				printf(" ");
		}
	}
	printf("\n");
}
