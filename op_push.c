#include "monty.h"
/**
 * push - function that add a node at the beginning
 * @stack: Stack
 * @param: Parameter
 * return: void
 */
void push(stack_t **stack, unsigned int param)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = param;
	new->next = *stack;
	new->prev = NULL;
	if ((*stack) != NULL)
		(*stack)->prev = new;

	*stack = new;
}
