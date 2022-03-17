#include "main.h"

/**
 * main - chech the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = _isalpha('-');
	_putchar(r + '0');
	r = _isalpha('a');
	_putchar(r + '0');
	r = _isalpha(99);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

