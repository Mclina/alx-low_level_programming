#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int count2;
	listint_t *head, *new_node;

	if (*h == NULL)
	{
		return (0);
	}

	head = *h;

	while (head)
	{
		count++;
		count2 = head->next - head;
		new_node = head;
		free(new_node);

		if (count2 >= 0)
		{
			break;
		}
		head = head->next;
	}
	return (count);
}
