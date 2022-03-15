#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l += 1;
	}
	_putchar(10);
}
