#include "lists.h"
/**
 *reverse_listint - reverses a listint_t linked list
 *@head: points to the pointer to the head of linked list
 *
 *Return: *head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}

	*head = prev;

	return (*head);
}
