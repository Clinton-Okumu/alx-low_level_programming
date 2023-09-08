#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: (0) success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	letter++;
	}
putchar('\n');
return (0);
}


