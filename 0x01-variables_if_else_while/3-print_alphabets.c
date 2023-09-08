#include <stdio.h>
/**
 * main - print upper and lowercase letters
 * Return: return (0) success
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
putchar('\n');
return (0);
}
