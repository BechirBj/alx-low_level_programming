#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *h)
{
	list_t *t;

	while (h)
	{
		t = h->next;
		free(h->str);
		free(h);
		h = t;
	}
}

