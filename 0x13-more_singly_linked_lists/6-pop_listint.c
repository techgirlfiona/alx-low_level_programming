#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * and returns the head node data
 * @head: a pointer to listint_t structure
 * Return: the heads node data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int removed = 0;

	if (*head == NULL)
		return (removed);

	if (*head == NULL)
		return (removed);

	temp = *head;
	removed = temp->n;
	/*make head point to the next element*/
	*head = (*head)->next;
	free(temp);

	return (removed);
}
