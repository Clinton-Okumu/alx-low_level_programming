#include "main.h"
#include <stddef.h>
/**
 *_strchr - function that locates a character in a string
 *@s: character
 *@c: character
 *Return: (s) success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
