#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t nodes;
	const listint_t *hold;

	current = head;
	if (current == NULL)
		exit(98);

	nodes = 0;
	while (current != NULL)
	{
		hold = current;
		current = current->next;
		nodes++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (nodes);
}
