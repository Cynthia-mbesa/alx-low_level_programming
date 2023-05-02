#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t
 *@head: points to the pointer of the head of linked list
 *
 *Return: 0 or n
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	current_node = *head;
	*head = (*head)->next;
	n = current_node->n;
	free(current_node);

	return (n);
}
