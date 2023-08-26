#include "stack.h"


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	int stack[LIMIT];
	int top = -1;

	push(stack, &top, 1);
	push(stack, &top, 2);
	push(stack, &top, 3);
	display(stack, &top);
	pop(&top);
	display(stack, &top);
	return (0);
}
