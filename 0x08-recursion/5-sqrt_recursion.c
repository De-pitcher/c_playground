#include "main.h"

int _sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - returns the natural square root of a natual number.
 * @n: inpput.
 *
 * Return: natural square root of the number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0, n));
}

/**
 * _sqrt_helper - recurses to find the natural number.
 * @n: number to calculate the square root.
 * @start: start of the recursion.
 * @end: end of the recursion.
 *
 * Return: natural number of the n.
 */

int _sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
		return (-1);
	mid = (start + end) / 2;

	if ((mid * mid) == n)
		return (mid);
	else if ((mid * mid) > n)
		return (_sqrt_helper(n, start, mid - 1));
	return (_sqrt_helper(n, mid + 1, end));
}
