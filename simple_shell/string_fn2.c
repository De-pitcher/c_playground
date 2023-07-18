#include "main.h"

/**
 * _strcmp - a function that compares strings
 *
 * @str_a: the first string to be compared
 * @str_b: the second string to be compared
 *
 * Return: Always 0
 */

int _strcmp(char *str_a, char *str_b)
{
	int i = 0;

	for (i = 0; str_a[i] != '\0' && str_b[i] != '\0'; i++)
	{
		if (str_a[i] != str_b[i])
			return (str_a[i] - str_b[i]);
	}
	return (0);
}
