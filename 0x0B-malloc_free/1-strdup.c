#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: string
 *Return: NULL
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int length_of_str;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	length_of_str = 0;
	while (str[length_of_str] != '\0')
	{
		length_of_str++;
	}

	new_str = (char *)malloc((length_of_str + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_of_str; i++)
	{
		new_str[i] = str[i];
	}

	new_str[length_of_str] = '\0';
return (new_str);
}


