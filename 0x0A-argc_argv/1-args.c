#include <stdio.h>
#include "main.h"
/**
 *main - program that prints all arguments it receives
 *@argc: string
 *@argv: array
 *Return: (0) success
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
