#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a listint_t list
 * @idx: Position for insertion
 * @n: Data for insertion
 *
 * Return: Address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *node;
	unsigned int count = 1;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	ptr = *head;
	while (count < idx)
	{
		ptr = ptr->next;
		count++;
	}

	node->next = ptr->next;
	ptr->next = node;
	return (node);
}
