#include <stdio.h>
/**
 * main - function printing lovercase in reverse
 * Return: return (0) success
 */
int main(void)
{
	char letter = 'z';
		while (letter >= 'a')
		{
			putchar(letter);
			letter--;
		}
	putchar('\n');
	return (0);
}
