#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: parameter0
 * @index: parameter
 * Return: 1, or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *c = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (j < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		j++;
	}
	c = t->next;
	t->next = c->next;
	free(c);
	return (1);
}
