#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in t
 */
size_t list_len(const list_t *t)
{
	size_t x = 0;

	while (t)
	{
		x++;
		t = t->next;
	}
	return (x);
}

