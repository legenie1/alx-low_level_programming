#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: this is the parameter
 * Return: int
 */

int print_sign(int n)
{
	int plus = '+';

	if (n > 0)
	{
		_putchar(plus);
		return (1);
	}
	else if (n == 0)
	{
		_putchar();
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
