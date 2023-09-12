#include <unistd.h>

/**
 * _putchar - write a character to the standard output (stdout).
 * @c: The character to be written.
 */
void _putchar(char c)
{
	/* Use tabs for indentation */
	write(1, &c, 1);
}

/**
 * main - Entry point of the program.
 * Return: 0 on success.
 */
int main(void)
{
	char text[] = "_putchar";

	for (int i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n'); /* Print a newline character after "_putchar" */

	return (0);
}

