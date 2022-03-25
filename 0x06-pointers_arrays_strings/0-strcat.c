#include "main.h"

/**
 * _strcat - a function that concatenates two string
 * @dest: a pointer to char
 * @src: a pointer to char
 * Return: char
 */

int _strcat(char *dest, char *src))
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	_putchar(dest);

	return (dest);
}
