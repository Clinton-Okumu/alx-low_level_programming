#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t count = 0;

while (current != NULL)
{
printf("%d", current->n);

if (current->next != NULL)
printf(" -> ");

count++;
current = current->next;
}

printf("\n");

return (count);
}
