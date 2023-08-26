#include "queue.h"

/**
 * push - Inserts elements into the stack from the top
 * @head: stack data structure.
 * @data: element to be inserted.
 *
 * Return: Nothing.
 */

void push(node_t **head, int data)
{
	struct node_t *newNode = (struct node_t*)malloc(sizeof(struct node_t));

	if (newNode == NULL)
	{
		printf("Stack overflow\n");
		return;
	}
	else
	{
		newNode->data = data;
		newNode->next = NULL;

		if (*head == NULL)
			*head = newNode;
		else
		{
			node_t *tmp = *head;
			while (tmp->next !=
		}
	}
}
