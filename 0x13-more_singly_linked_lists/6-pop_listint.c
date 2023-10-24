#include "lists.h"
/**
 *pop_listint - function that deletes head node of listint_t
 *@head: pointer to the head pointer
 *Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (head == NULL)
	{
		return (0);
	}

		current = *head;
		*head = (*head)->next;
		data = current->n;
		free(current);

		return (data);
}
