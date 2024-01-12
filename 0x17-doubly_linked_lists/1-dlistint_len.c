#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a list
 * @h: points to the head of the dlistint list
 *
 * Return: Number of elements in the doubly list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
