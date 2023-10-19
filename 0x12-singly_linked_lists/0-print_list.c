#include <stdio.h>
#include "lists.h"

/**
 * print_linked_list - Prints all the elements of a linked list.
 * @head: Pointer to the Node_t linked list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_linked_list(const Node_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		if (!head->data)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->length, head->data);
		head = head->next;
		node_count++;
	}

	return (node_count);
}
