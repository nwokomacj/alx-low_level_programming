#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: a pointer to the first node in the in the linked list
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t element = 0;

	if (h && *h)
	{
		element = 1;
		if (*h > (*h)->next)
			element += free_listint_safe(&(*h)->next);
		free(*h);

	}
	*h = NULL;
	return (element);
}
