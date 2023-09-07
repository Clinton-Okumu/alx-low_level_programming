/**
 * main - A C program that prints line to standard error
 * Return: 1 (success)
 */
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}

