#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function.
 * @name: The name to be printed.
 * @f: A function that will be used to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
else
{
printf("Invalid input\n");
}
}

/**
 * print_console - Prints a name to the console.
 * @name: The name to be printed.
 */
void print_console(char *name)
{
printf("Name: %s\n", name);
}
