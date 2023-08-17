#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: points to the head of the list
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	if (!current)
	{
		return (-1);
	}
	if (current->next)
	{
		current->next->prev = current->prev;
	}
	if (current->prev)
	{
		current->prev->next = current->next;
	}
	free(current);
	return (1);
}
