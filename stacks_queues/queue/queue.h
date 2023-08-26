#ifndef STACK
#define STACK

#include <stdlib.h>
#include <stdio.h>

/**
 * struck node - structure for implementing Queue in C
 * @data: element in the queue
 * @nex: pointer to next node of the queue.
 */
typedef struct node
{
	int data;
	struct node *next;
} node;

void push(node *queue, int data);
void pop(node *queue);
void display(node *queue);

#endif
