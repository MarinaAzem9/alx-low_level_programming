#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_to_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the Node_t linked list.
 * @str: The string to put in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
Node_t *add_node_to_end(Node_t **head, const char *str)
{
	Node_t *new_node;
	Node_t *temp = *head;
	unsigned int string_length = 0;

	while (str[string_length])
		string_length++;

	new_node = malloc(sizeof(Node_t));
	if (!new_node)
		return (NULL);

	new_node->data = strdup(str);
	new_node->length = string_length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
