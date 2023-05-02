#include "lists.h"
/**
 *free_listint2 - that frees a listint_t list
 *@head: points to the pointer of head to linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
