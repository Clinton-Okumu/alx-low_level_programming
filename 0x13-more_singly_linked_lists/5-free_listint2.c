#include "lists.h"
/**
 *free_listint2 - free listint_t
 *@head: pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
