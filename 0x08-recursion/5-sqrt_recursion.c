#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - find the natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - find square root
 * @: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);

	else if (val * val < n)
		return (square(n, val + 1));

	else
		return (-1);
}
