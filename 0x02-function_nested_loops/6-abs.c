#include "main.h"

/**
 * _abs - returns the absolute of nun.
 * @num: input
 *
 * Return: absolute of num.
 */

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else if (num > 0)
		return (num);
	return (num);
}
