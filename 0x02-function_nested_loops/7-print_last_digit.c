#include "main.h"

/**
 * print_last_digit - prints the last digit of num
 * @num: input
 * Return: last digit of num.
 */

int print_last_digit(int num)
{
	int result = num % 10;

	if (result < 0)
		result = -result;
	_putchar('0' + result);
	return (result);
}
