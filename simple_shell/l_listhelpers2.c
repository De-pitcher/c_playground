#include "main.h"

/**
 * add_end_node - adds a separator node to end of list
 *
 * @head: represents the head of the linked list
 * @sep: separator to be added
 * Return: NULL on failure, and address of the head on success
 */

sep_t *add_end_node(sep_t **head, char sep)
{
	sep_t *new, *temp;

	new = malloc(sizeof(sep_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->sep = sep;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
