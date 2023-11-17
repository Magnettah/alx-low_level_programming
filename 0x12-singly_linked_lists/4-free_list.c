#include "lists.h"

/**
 * free_list - frees a lis_t list.
 * @head: pointer to the head of list_t list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
