#include "lists.h"
/**
 *listint_len - returns the number of elements in a linked list_t list
 *@h: A pointer to the first node of the list.
 *Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

