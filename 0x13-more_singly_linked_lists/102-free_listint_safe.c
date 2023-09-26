#include "lists.h"

/**
 * free_listint_safe - function
 * @h: parameter
 * Return: elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int c;
	listint_t *t;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		c = *h - (*h)->next;
		if (c > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
