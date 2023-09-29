#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - Searches a string for any of a set of bytes
 *@s: Pointer to the string to search in
 *@accept: Pointer to the string containing bytes to search for
 *Return: (s) succcess
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp_accept = accept;

		while (*temp_accept != '\0')
		{
			if (*s == *temp_accept)
			{
				return (s);
			}
			temp_accept++;
		}
		s++;
	}
	return (NULL);
}

