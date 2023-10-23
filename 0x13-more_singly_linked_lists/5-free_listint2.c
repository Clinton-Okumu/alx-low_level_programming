#include "lists.h"
/**
 *free_listint2 - free listint_t
 *@head: pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
