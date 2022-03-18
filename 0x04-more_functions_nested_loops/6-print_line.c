#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 *
 * return 0
 * @n: is an interger
 */
void print_line(int n)
{
	if (n >= 0)
	{
		int i = 1;

		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
