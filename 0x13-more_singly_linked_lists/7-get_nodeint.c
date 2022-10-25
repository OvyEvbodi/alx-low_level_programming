#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: list_t list to be freed
 * @index: the index position of the node to be returned
 * 
 * Return: a pointer to the node
 * NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (!(head->next) || !(head))
		return (NULL);
	else 
		return (head);
}