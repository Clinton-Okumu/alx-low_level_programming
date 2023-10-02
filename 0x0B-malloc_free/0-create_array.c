#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - function that creates an array of chars
 *@size: integer
 *@c: character
 *Return: NULL success
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
return (array);
}

