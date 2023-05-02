#include "lists.h"
/**
 *get_nodeint_at_index -  returns the nth node of a listint_t linked list
 *@head: pointer to the head of the linked list
 *@index: the index of the node, starting at 0
 *
 *Return: NULL, current
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		current = current->next;
		count++;
	}
	return (NULL);
}
