#ifndef LISTS_H
#define LISTS_H

/**
 * struct Node - singly linked list node
 * @data: string - (malloc'ed string)
 * @length: length of the string
 * @next: points to the next node
 *
 * Description: Node structure for a singly linked list
 * used in a program.
 */
typedef struct Node
{
	char *data;
	unsigned int length;
	struct Node *next;
} Node_t;

/**
 * print_linked_list - Prints all the elements of a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_linked_list(const Node_t *head);

/**
 * linked_list_length - Calculates the number of nodes in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t linked_list_length(const Node_t *head);

/**
 * add_node_to_list - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
Node_t *add_node_to_list(Node_t **head, const char *str);

/**
 * add_node_to_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
Node_t *add_node_to_end(Node_t **head, const char *str);

/**
 * free_linked_list - Frees the memory occupied by a linked list.
 * @head: Pointer to the head of the linked list.
 */
void free_linked_list(Node_t *head);

#endif
