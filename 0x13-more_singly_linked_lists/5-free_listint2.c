#include "lists.h"
/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *first = *head;
	listint_t *next_node;

	while (first != NULL)
	{
		next_node = first;
		first = first->next;
		free(next_node);
	}

	*head = NULL;
}
