#include "lists.h"
/**
 *free_listint_safe - frees a listint_t list
 *@h: points to the pointer to the head of linked list
 *
 *Return: count
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;
	
	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	
	current = *h;
	
	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		
		if (temp <= current)
		{
			break;
		}
		
		free(temp);
	}
	
	*h = NULL;
	
	return (count);
}
