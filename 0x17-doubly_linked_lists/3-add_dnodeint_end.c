#include "lists.h"

/**
 * add_dnodeint_end - adds node at end
 * @head: head address of linked list
 * @n: number of new value for new node
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *fresh;

	tmp = *head;
	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->next = NULL;
	fresh->prev = NULL;
	fresh->n = n;
	if ((*head) == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	fresh->prev = tmp;
	tmp->next = fresh;
	return (fresh);
}
