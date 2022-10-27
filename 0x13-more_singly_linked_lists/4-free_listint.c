#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list.
 **/

void free_listint(listint_t *head)
{
	listint_t my_node;
	listint_t *next_node;

	if (head)
	{
	        my_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(my_node);
			my_node = next_node;
			next_node = next_node->next;
		}
		free(my_node);
	}
}
