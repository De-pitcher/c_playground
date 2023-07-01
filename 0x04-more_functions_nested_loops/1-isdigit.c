#include "main.h"

/**
 * _isdigit - checks if a c is a digit.
 * @c: parametr of type int.
 *
 * Return: On true 1 and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
