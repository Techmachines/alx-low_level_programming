#include "lists.h"

/**
 * add_dnodeint - adds node at top
 * @head: address of head linked lst
 * @n: number
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh;

	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->next = NULL;
	fresh->prev = NULL;
	if ((*head) == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	else
	{
		(*head)->prev = fresh;
		fresh->next = *head;
		*head = fresh;
		return (fresh);
	}
}
