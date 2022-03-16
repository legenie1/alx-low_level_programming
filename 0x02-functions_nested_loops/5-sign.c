#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: this is the parameter
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+");
	}
	else if (n == 0)
	{
		return (0);
		printf("0");
	}
	else if (n < 0)
	{
		return (-1);
		printf("-");
	}
}
