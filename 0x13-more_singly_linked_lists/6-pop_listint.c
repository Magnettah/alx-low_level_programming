#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * Return: Head node's data, or 0 if linked list is empty
 * @head: pointer to the first node on the lis
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int node_data;

	if (!*head)
		return (0);

	*head = (*head)->next;
	node_data = temp->n;
	free(temp);

	return (node_data);
}
