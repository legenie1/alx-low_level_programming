#include "main.h"

/**
 * _abs - this is to print the absolute value
 * @n: this is the parameter
 * Return: int
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	else
	{
		n = n;
	}
	return (n);
}
