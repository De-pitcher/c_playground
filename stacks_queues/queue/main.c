#include "queue.h"


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	struct node *queue = (struct node*)malloc(sizeof(struct node));

	push(queue, 1);
	push(queue, 2);
	push(queue, 3);
	/* Displays the stack after insertion(pushing) */
	display(queue);
	/* Displays the stack after popping an element*/
	pop(queue);
	display(queue);
	return (0);
}
