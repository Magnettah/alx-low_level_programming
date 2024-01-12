#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: points to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	return (current);
}
