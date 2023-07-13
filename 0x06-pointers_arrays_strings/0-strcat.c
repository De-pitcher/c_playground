#include "main.h"

/**
 * _strcat - concate nates two strings.
 * @dest: destination of the string to be concatenated.
 * @src: source of the string to be concatenated.
 *
 * Return: dest after being concatenated.
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
		len++;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}
