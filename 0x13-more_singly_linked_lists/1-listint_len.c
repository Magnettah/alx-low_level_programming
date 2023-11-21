#include "lists.h"
/**
 * listint_len - returns the number of elements in a list
 * @h: pointer to the head of the list
 * Return: Number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
