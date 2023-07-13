#include "main.h"

/**
 * rev_array - reverse the contents of an array of int.
 * @a: pointer to the arrays of int.
 * @n: number of elements in the array.
 * 
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int start = 0, end = n -1, tmp = 0;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		start++;
		end--;
	}
}
