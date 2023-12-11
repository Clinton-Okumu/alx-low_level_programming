#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@src: character
 *@dest: the address of memory to print
 *@n: the size of the memory to print
 *Return: (dest) success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
