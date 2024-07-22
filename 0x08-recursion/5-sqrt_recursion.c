#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int
 * Return: -1 or natural square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

	int sq = 1;

	return (sqrt_fun(n, sq));
}

/**
 * sqrt_fun - helper function to solve _sqrt_recursion
 * @sq: int
 * @n:  int
 * Return: natural square root or -1
 */

int sqrt_fun(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
