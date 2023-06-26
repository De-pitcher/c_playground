#include "main.h"

/**
 * _islower - checks if a character is a lowercase
 * @c: the character to be checked
 * Return: On success 1
 * On failure returns 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
