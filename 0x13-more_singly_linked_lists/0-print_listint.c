#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all elements of a listint_t list.
  * @h: pointer to first element in a list.
  *
  * Return:  number of nodes.
  */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
