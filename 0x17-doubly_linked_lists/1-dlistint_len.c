#include "lists.h"

/**
 * dlistint_len - length of linked list
 * @h: head of list
 * Return: size_t value
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int read = 0;

	tmp = h;
	while (tmp != NULL)
	{
		read++;
		tmp = tmp->next;
	}
	return (read);
}
