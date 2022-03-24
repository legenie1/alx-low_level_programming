#include "main.h"

/**
 * _strcat - a function that concatenates two string
 * @dest: a pointer to char
 * @src: a pointer to char
 * Return: pointer
 */

int _strcat(char *dest, char *src))
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	_putchar(dest);
}
