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
	listint_t *ptr, *temp;

	if (h == NULL || *h == NULL)
	{
		return (count);
	}

	ptr = *h;

	while (ptr != NULL)
	{
		count++;
		temp = ptr;
		ptr = ptr->next;
		free(temp);

		if (temp <= ptr)
		{
			*h = NULL;
			exit(98);
		}
	}

	*h = NULL;

	return (count);
}
