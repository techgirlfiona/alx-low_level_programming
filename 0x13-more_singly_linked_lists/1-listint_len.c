#include "lists.h"
#include <stdio.h>

/**
  * listint_len - returns the number of elements ina linked listint_t list.
  * @h: pointer to first element on list.
  *
  * Return: number of elements in list.
  */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
