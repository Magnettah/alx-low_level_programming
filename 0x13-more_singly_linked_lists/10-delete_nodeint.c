#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list
 * @head: pointer to the head node of a list
 * @index: the index of the node that should be deleted (starts at 0)
 * Return: 1 if successful, -1 if it failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *now = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	now = temp->next;
	temp->next = now->next;
	free(now);

	return (1);

}
