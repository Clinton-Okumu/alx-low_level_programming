#include "main.h"
/**
 *_strcat - function that concatenates two strings
 * @dest: character
 *@src: character
 *Return: return dest success
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
*ptr = '\0';

return (dest);
}
