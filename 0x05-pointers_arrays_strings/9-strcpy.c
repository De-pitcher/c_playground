#include "main.h"

/**
 * _strcpy - copies string pointer by src to dest and including the terminal null character
 * @src: sorce to be copied.
 * @dest: destination of copy.
 * Return: Nothing.
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
