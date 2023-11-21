#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *first = head;
	listint_t *next_node;

	while (first != NULL)
	{
		next_node = first->next;
		free(first);
		first = next_node;
	}
}
