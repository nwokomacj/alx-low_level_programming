#include "lists.h"
/**
 * print_list - prints all the elements a list_t lists
 * @h: singly linked list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t list;

	list = 0;

	if (!h)
	{
		return (list);
	}
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		list++;
		h = h->next;
	}
	return (list);
}
