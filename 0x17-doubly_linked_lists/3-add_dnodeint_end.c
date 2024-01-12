#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: pointer to the head of the dlistint list
 * @n: data for the new node to be added
 *
 * Return: Address of the new element, or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_lastnode, *current;

	new_lastnode = malloc(sizeof(dlistint_t));

	if (new_lastnode == NULL)
		return (NULL);

	new_lastnode->n = n;
	new_lastnode->next = NULL;

	if (*head == NULL)
	{
		new_lastnode->prev = NULL;
		*head = new_lastnode;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_lastnode;
		new_lastnode->prev = current;
	}

	return (new_lastnode);
}
