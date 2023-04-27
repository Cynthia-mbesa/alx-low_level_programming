#include "lists.h"
/**
 *free_list - function that frees a list_t list
 *@head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (head != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
