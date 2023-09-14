#include "main.h"
/**
 *print_square - output squares
 *@n: to determine size
 */
void print_square(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (i = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
