#include <stdio.h>
int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - Checks if the input number is prime.
 *
 * @n: input number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));  /* recursive helper function */
	}
}

/**
 * is_prime_helper - Recursive helper function to check primality.
 *
 * @n: input number
 * @divisor: current divisor to check for divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);  /* reached the end without finding a divisor, number is prime */
	}
	else if (n % divisor == 0)
	{
		return (0);  /* found a divisor, number is not prime */
	}
	else
	{
		return (is_prime_helper(n, divisor + 1));
    /* increment divisor and continue checking */
	}
}
