#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: first node
 * @index: index
 *
 * Return: t or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *t = head;

	while (t && j < index)
	{
		t = t->next;
		j++;
	}
	return (t ? t : NULL);
}
