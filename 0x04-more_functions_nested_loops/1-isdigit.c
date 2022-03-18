#include "main.h"

/**
 * _isdigit - check for a digit
 *
 * Return: 1 if c is a digit, 0 if not
 *
 *@c: ASCI character code
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
