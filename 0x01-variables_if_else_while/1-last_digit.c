#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - if else statement function
* Return: return (0) success
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
		printf("last digit of %d is %d, and it is ", n, last_digit);
	if (last_digit > 5)
	{
		printf("greater than 5\n");
	} else if (last_digit == 0)
	{
		printf("equal to 0\n");
	} else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
