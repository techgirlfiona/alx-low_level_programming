include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: A pointer to listint_t structure
 * Return: A pointer to the first node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *reverse;

	if (head == NULL || *head == NULL)
		return (NULL);
	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = reverse;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = reverse;
	return (*head);
}
