#include "lists.h"
/**
 *free_listint2 - that frees a listint_t list
 *@head: points to the pointer of head to linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
