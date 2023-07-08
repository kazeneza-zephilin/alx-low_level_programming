#include <stdio.h>
int sqrt_helper(int n, int guess);

/**
 *_sqrt_recursion - return the natural  square root of number
 * @n:int value
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 1));
	}

}

/**
 * sqrt_helper - recursive helper function to find the square root.
 *
 * @n:input number
 * @guess: current guess for the square root
 *
 * Return: integer
 */
int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess > n)
{
return (-1);
}
else
{
	return (sqrt_helper(n, guess + 1));
}
}
