#include "main.h"

/**
 * _strncpy - copies  a string.
 * @dest: destination of the string to be copied to.
 * @src: source of the string to copy.
 * @n: max bytes to be useed
 *
 * Return: dest after the copy.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
