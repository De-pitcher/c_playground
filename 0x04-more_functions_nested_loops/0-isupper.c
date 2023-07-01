#include  "main.h"
/**
 * _isupper -   checks if c is an uppercase.
 *  @c: character.
 *
 * Return: If true 1 and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
