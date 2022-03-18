#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 *
 * return: always 0
 */
void more_numbers(void)
{
	int i, c, ch;

	for (i = 1; i <= 14; i++)
	{
		for (c = 48; c <= 57; c++)
		{
			_putchar(c);
		}
		for (ch = 48; ch <= 52; ch++)
		{
			_putchar(49);
			_putchar(ch);
		}
		_putchar('\n');
	}
}
