#include "lists.h"

/**
 * free_list - frees alinked list
 * @head: list_t list to be freed
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(head);
	}
}
