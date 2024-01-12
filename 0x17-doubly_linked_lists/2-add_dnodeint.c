#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: points to the head of the dlistint list
 * @n: data for the new node to be added
 *
 * Return: Address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}

	*head = new_node;
	return (new_node);
}
