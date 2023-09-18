#include "main.h"
/**
 * swap_int - swapping values *a and *b
 *@a: pointer a
 *@b: pointer b
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
