#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: para0
 * @idx: para1
 * @n: para2
 * Return: new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (j = 0; t && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new->next = t->next;
			t->next = new;
			return (new);
		}
		else
			t = t->next;
	}
	return (NULL);
}
