#include "main.h"

/**
 * print_sign - prints the sign of a number n
 * @n: number to be checked
 *
 * Return: the sign of the number n.
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else 
		return (0);
}
