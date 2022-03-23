#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 *@a: is an integer
 *@b: is an integer
 *
 * Return: 0
 */
int swap_int(int *a, int *b)
{
	int c = *a;
	
	*a = *b;
	*b = c;
	return (0);
}
