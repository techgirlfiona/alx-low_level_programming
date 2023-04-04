#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at specific index from list
 * @head: pointer to listint_t structure
 * @index: index of node of value to be deleted
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *next_node, *temp;

	temp = *head;
	node = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && node < index - 1)
	{
		temp = temp->next;
		node++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;

	return (1);
}
