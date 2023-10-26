#include "main.h"
/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: pointer
 *Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = (result << 1);
		} else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		} else
		{
			return (0);
		}
	}
	return (result);
}
