#include "main.h"

/**
  * print_alphabet - printing alphabet
  * Return: (0) success
  */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{
		_putchar(letter);
		letter++;
	}
_putchar('\n');
}
