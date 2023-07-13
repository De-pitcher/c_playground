#include "main.h"

/**
 * _strcmpy - compares two strings
 * @s1: string one.
 * @s2: string two.
 *
 * Return: difference between s1 and s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (-1);
		i++;
	}

	return (s1[i] - s2[i]);
}
