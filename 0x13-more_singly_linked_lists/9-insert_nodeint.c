#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to pointer of the first element on list.
  * @idx: index of list where the new node should be added.
  * @n: integer to be inserted.
  *
  * Return: address of the new node or NULL if it fails.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
