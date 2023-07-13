#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination where the sorce string will be appended
 * @src: source of the string to be appended.
 * @n: the most byte to be used
 *
 * Return: pointer to the resulting dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0' && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
