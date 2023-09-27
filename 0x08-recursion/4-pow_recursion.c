#include "main.h"
/**
 *_pow_recursion -function that return the value of x raised to the power of y
 *@x: integer
 *@y: integer
 *Return: (x * _pow_recursion(x, y - 1)) success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		int result = (x * _pow_recursion(x, y - 1));

		return (result);
	}
}
