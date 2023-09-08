#include <stdio.h>
/**
  * main - print single digits from 0 to 9
  * Return: return (0) success
  */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
putchar('\n');
return (0);
}
