#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
