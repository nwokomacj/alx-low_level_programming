#include "lists.h"

/**
 * find_listint_loop - finds the loop in listint_t linked list
 * @head: pointer to head node of the list
 * Return: pointer to the start of the loop. NULL if non exists
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head)
	{
		if (head > head->next)
			head = find_listint_loop(head->next);
		else
			return (head->next);
		return (head);
	}
	return (NULL);
}
