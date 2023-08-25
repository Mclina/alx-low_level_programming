#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		list_t *tmp;

		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
