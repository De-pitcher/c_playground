#include "main.h"

/**
 * string_toupper - chages all the lowercase letter to uppercase
 * @str: pointer to the string.
 *
 * Return: pointer to the uppercased string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}

	return (str);
}
