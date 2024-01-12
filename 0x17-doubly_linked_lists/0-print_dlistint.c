#include "lists.h"

/**
 * print_dlistint - prints all the elements in a list
 * @h: Points the head of the doubly lists
 *
 * Return: Number of nodes  in the doubly list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_num = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_num++;
	}

	return (node_num);
}
