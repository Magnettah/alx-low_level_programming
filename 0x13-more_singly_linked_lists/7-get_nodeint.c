#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @index: The index of the node, starting at 0
 * @head: pointer to the first node
 * Return: nth node of the list, or NULL if node doesn't exist
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
