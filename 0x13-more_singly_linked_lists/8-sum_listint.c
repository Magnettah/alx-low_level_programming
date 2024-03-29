#include "lists.h"
/**
 * sum_listint - returns the sum of all data of a list
 * @head: pointer to the first node of the list
 * Return: sum of all data, or 0 if the list is empty
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
