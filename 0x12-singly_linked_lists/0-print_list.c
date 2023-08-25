#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the singly linked list.
 * Return:  number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
