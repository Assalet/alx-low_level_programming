#include"main.h"

/**
 * factorial - return the factorial of a given number
 *
 * Return: result
 *
 * @n: is an interger.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return ((n) * factorial(n - 1));
	}
}
