#include "lists.h"
#include <string.h>

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list.
  * @head: pointer to pointer of first element.
  * @n: elements to be added.
  *
  * Return: addres of new element or NULL.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));

	if (!*head)
	{
		return (NULL);
	}
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
