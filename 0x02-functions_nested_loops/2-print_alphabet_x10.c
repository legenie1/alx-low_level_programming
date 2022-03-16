#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * You can only use putchar twice
 * Return - nothing
 */

void print_alphabet_x10(void)
{
	int l;
	int i = 0;

	while (i < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l += 1;
		}
		_putchar(10);
		i += 1;
	}
}
