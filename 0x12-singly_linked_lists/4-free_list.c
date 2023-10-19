#include <stdlib.h>
#include "lists.h"

/**
 * free_linked_list - Frees a linked list.
 * @head: Pointer to the Node_t linked list to be freed.
 */
void free_linked_list(Node_t *head)
{
	Node_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head->data);
		free(head);
		head = current_node;
	}
}
