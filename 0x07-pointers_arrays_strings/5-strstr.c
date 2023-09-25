#include "main.h"
#include <stddef.h>
/**
 *_strstr - function that locates a substring.
 *@haystack: character in large
 *@needle: character in small
 *Return: (start) success
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *temp_needle = needle;

	while (*haystack == *temp_needle && *haystack != '\0' && *temp_needle != '\0')
		{
			haystack++;
			temp_needle++;
		}

		if (*temp_needle == '\0')
		{
			return (start);
		}
	haystack = start + 1;
	}
	return (NULL);
}
