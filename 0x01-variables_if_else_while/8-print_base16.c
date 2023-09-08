#include <stdio.h>
/**
 * main -function printing base 16 numbers
 * Return: return (0) success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}
putchar('\n');
return (0);
}
