#include "main.h"

/**
 * _isalpha - check for alphabetic character.
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 if not
 *
 * @c: The character in ASCII code
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
