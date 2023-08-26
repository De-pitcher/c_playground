#include "stack.h"

/**
 * display - displays the stack elements according to LIFO rule.
 * @stack: stack data structure.
 * @top: pointer to the top index.
 *
 * Return: Nothing.
 */
void display(int stack[], int *top)
{
	int i;

	if (*top <= -1)
		printf("Stack is empty\n");
	else
	{
		printf("The elements of the stack are:\n");
		for (i = *top; i >= 0; i--)
			printf("%d\n", stack[i]);
	}
}
