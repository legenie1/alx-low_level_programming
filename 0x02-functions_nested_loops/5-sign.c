#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: this is the parameter
 * Return: int
 */

int print_sign(int n)
{
	char plus = '+';
	char minus = '-';

	if (n > 0)
	{
		_putchar(plus);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(minus);
		return (-1);
	}
}
