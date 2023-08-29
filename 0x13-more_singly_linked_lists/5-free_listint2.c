#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *new_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		new_node = (*head)->new_node;
		free(*head);
		*head = new_node;
	}
}
