#include "lists.h"
/**
 *delete_nodeint_at_index - delete node index
 *@head: pointer
 *@index: integer
 *Return: -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
		count++;
		previous = current;
		current = current->next;
	}
	return (-1);
}



