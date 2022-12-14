#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: a node in the list
 * @idx: the index of the list where the new node should be added
 * @n: an integer
 * Return: the new node or NULL, if insertion failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h, *prev = NULL, *new = NULL;

	if (!h)
		return (NULL);
	while (temp && temp->prev)
		temp = temp->prev;
	for (i = 0; temp; i++)
	{
		if (i == idx)
			break;
		prev = temp;
		temp = temp->next;
	}
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = prev;
	if (prev)
		prev->next = new;
	new->next = temp;
	if (temp)
		temp->prev = new;
	if (idx == 0)
		*h = new;
	return (new);
}
