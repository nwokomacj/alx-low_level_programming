#include "lists.h"

/*
 * add_dnodeint - adds a new node at the beginning of a liked list
 *
 * @h: head of the list
 * @n: the data of the node
 * Return: the address of the new element, or NULL if it fails
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*create the node*/
	dlistint_t *new = NULL;
	/*allocate memory*/
	new = malloc(sizeof(dlistint_t));
	if  (new == NULL)
		return (NULL);
	/*assign data to the new node*/
	new->n = n;
	/*point next of new to the first node in the link*/
	new->next = (*head);
	/*point prev to null*/
	new->prev = NULL;
	/*
	 * point prev of the firt node (now the fisrt node is the second node)
	 * to new
	 */
	if ((*head) != NULL)
	(*head)->prev = new;
	/*head points to new*/
	(*head) = new;
	return (new);
}
