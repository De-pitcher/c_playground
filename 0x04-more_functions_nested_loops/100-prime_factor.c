#include <stdio.h>
#include <math.h>

/**
 * is_prime - checks if an integer is prime.
 * @num: number to be checked.
 *
 * Return: On success 0 and 1 on failure.
 */

long is_prime(long num)
{
	long i;


	if (num <= 1)
		return (0);

	for (i = 2; i <= sqrt(num); i++)
		if (num % i == 0)
			return (0);
	return (1);
}

/**
 * largest_prime_factor - prints the laregst prime factor
 * @num: number to be checked.
 *
 * Return: On success o and 1 on failure.
 */

long largest_prime_factor(long num)
{
	long factor = 2;

	while (num > 1)
		if (num % factor == 0)
			num /= factor;
		else
			factor++;

	return (factor);
}

/**
 * main - prints the largest prime fcot rof 612852475143.
 *
 * Return: Nothing.
 */

int main(void)
{
	long number = 612852475143;
	long largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}
