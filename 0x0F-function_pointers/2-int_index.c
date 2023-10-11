#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: pointer to array of integers
 *@size: integer representing no of elements in array
 *@cmp: pointer to funtion
 *Return: (i) integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i]))
		return (i);
}
return (-1);
}
