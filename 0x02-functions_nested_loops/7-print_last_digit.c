#include "main.h"
/**
  * print_last_digit - prints the last digit
  * @num: Compute digit
  * Return: (0) success
  */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}

