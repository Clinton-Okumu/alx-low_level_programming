#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position in a list
 *@head: pointer to the head of the list
 *@idx: index at which the new node should be added
 *@n: data to be stored in the new node
 *Return: Address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *newnode;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
