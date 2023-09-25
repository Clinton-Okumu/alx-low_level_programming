#include "main.h"
/**
 *_strspn - Gets the length of a prefix substring
 *@s: Pointer to the string to search in
 *@accept: Pointer to the string containing characters to search for
 *Return: The number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int isMatch;
	char *original_accept = accept;

	while (*s != '\0')
	{
		isMatch = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				isMatch = 1;
				break;
			}
			accept++;
		}

		if (isMatch == 0)
		{
			break;
		}

		s++;
		accept = original_accept;
		length++;
	}
	return (length);
}
