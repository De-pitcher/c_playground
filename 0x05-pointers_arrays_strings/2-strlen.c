#include "main.h"

/**
 * _strlen - returns the lenght of string
 * @s: input.
 *
 * Return: length of str.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
