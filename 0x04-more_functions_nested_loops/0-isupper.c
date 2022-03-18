#include "main.h"
/**
 * _isupper - check for uppercase character.
 *
 * Return: 1 if uppercase or 0 if not.
 *
 * @c : a character in ASCI code.
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
