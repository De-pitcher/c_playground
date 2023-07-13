#include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - checks if a number is a prime number.
 * @n: input.
 *
 * Return: 1 is n is a prime number else o.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return is_prime_helper(n, 2);
}

/**
 * is_prime_helper - checks if n is prime
 * @n: input.
 * @divisor: divides then to check if it us a prime.
 *
 * Return: 1 if n is a prime else 0.
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return 1;
	if (n % divisor == 0)
		return 0;
	return is_prime_helper(n, divisor + 1);
}
