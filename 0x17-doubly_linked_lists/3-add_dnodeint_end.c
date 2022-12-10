#include "lists.h"

/*
 * add_dnodeint_end - adds a new node at the end of a link
 * @h: the head of the link
 * @n: the data
 * Return: the address of the new element or NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail, *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tail = *head;

	if (tail)
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new;
	}
	new->prev = tail;
	if (!*head)
		*head = new;
	return (new);
}
