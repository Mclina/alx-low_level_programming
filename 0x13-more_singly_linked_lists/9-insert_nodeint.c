#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp, *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp)
	{

		if (count == (idx - 1))
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		count++;
		temp = temp->next;
	}
	free(new_node);

	return (NULL);
}
