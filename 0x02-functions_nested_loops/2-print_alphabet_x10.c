#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 * Return: (0) success
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	_putchar('\n');
	}
}

