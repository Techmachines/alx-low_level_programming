#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Tom, *Jerry;

	/* determine if loop exists by seeing if Tom and Jerry meets */
	/* start them at head, move Tom one node and Jerry two nodes */
	Tom = Jerry = head;

	while (Tom != NULL && Jerry != NULL)
	{
		Tom = Tom->next;
		Jerry = Jerry->next->next;

		if (Tom == Jerry)
		{
			/* start Tom at head and Jerry at address they met */
			/* move Tom and Jerry one node to find loop origin */
			Tom = head;
			while (Tom != Jerry)
			{
				Tom = Tom->next;
				Jerry = Jerry->next;
			}
			return (Tom);
		}
	}

	return (NULL);
}
