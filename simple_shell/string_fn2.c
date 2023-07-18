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

/**
 * copy_info - copies info to create a new environment or alias
 * @name: name of environment or alias
 * @value: value of environment or alias
 *
 * Return: new environment or alias
 */

char *copy_info(char *name, char *value)
{
	char *new;
	int len_name, len_value, len;

	len_name = _strlen(name);
	len_value = _strlen(value);
	len = len_name + len_value + 2;
	new = malloc(sizeof(char) * (len));
	_strcpy(new, name);
	_strcat(new, "=");
	_strcat(new, value);
	_strcat(new, "\0");

	return (new);
}
