#include "lists.h"

/**
  * listint_len - returns the number of elements ina linked listint_t list.
  * @h: pointer to first element on list.
  *
  * Return: number of elements in list.
  */

size_t listint_len(const listint_t *h)
{
	int nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

/**
 * get_nodeint_at_index - A function that gets a node of list at specific index
 * @head: pointer to listint_t structure
 * @index: index of the node.
 * Return: a pointer to node at specific index or NULL if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int nodes;

	current = head;
	nodes = listint_len(head);

	if (current == NULL)
		nodes++;

	if (nodes <= index)
	{
		return (NULL);
	}
	else
	{
		nodes = 0;
		while (current != NULL)
		{
			if (nodes == index)
			{
				break;
			}
			else
			{
				nodes++;
				current = current->next;
			}
		}
		return (current);
	}
}
