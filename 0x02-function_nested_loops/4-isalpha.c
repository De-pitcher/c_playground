#include "main.h"

/**
 * _isalpha - checks if a character is an alpha
 * @c: character to be checked
 * Return: 1 on Success and 0 on failure.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
