#include <stdio.h>
/**
 * main - program that prints alpabets in upper and lower case
 * Return: return (0) success
 */
int main(void)
{
	char lowercase = 'a';
		while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
putchar('\n');
return (0);
}
