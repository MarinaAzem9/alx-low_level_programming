#include <stdlib.h>
#include "lists.h"

/**
 * get_linked_list_length - Returns the number of elements in a linked list.
 * @head: Pointer to the Node_t linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t get_linked_list_length(const Node_t *head)
{
	size_t element_count = 0;

	while (head)
	{
		element_count++;
		head = head->next;
	}

	return (element_count);
}
