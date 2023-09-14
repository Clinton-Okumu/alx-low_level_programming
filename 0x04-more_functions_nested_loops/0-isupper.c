#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * _isupper - checks if a character is an uppercase
 *
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 otherwisei
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

