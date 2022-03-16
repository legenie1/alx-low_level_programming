#include "main.h"

/**
 * _isalpha - thisprogram checks if a given character is alphabetic
 * @c: this is the character passed in parameter
 * Return: int
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
