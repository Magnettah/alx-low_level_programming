#include"lists.h"
/**
 * add_nodeint_end - Add a new node at the end of a list
 * @n: data assigned in the new node
 * @head: points to the first node of the list
 * Return: Address of the new element, or NULL if it fails
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (!end)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = end;
	}
	return (end);
}
