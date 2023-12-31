#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input.
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int len = 0, i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
