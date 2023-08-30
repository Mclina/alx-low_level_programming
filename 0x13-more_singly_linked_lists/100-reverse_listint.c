#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = *head;
	listint_t *next_node = NULL;


	if (head == NULL)
	{
		return (NULL);
	}

	prev = *head;
	*head = NULL;

	while (prev != NULL)
	{
		next_node = prev->next;

		prev->next = *head;
		*head = prev;
		prev = next_node;
	}

	return (*head);
}
