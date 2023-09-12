#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *  @c: The character to print
 *
 * Return: On success 1.
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
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
/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
