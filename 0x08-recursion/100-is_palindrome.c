#include "main.h"

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: pointer to te address of the string.
 *
 * Return: 1 if true else 0.
 */

int is_palindrome(char *s)
{
	int length = strlen(s);
   

	if (length <= 1)
		return (1);

	return (is_palindrome_helper(s, 0, length - 1));
}

/**
 * is_palindrome_helper - uses the recursive approach to check if a string is a palindrome.
 * @s: pointer to the address of the string.
 * @statrt: starting point for thr recursion.
 * @end: the length of the string.
 *
 * Return: 1 if true else 0.
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
    
    if (s[start] != s[end])
	    return (0);
    return (is_palindrome_helper(s, start + 1, end - 1));
}
