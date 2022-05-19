#include "monty.h"
/**
 * pop - function that removes the top element of the stack.
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *current = *stack, *aux = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

	aux = current;
	if (current->next)
	{
		current = current->next;
		current->prev = aux->prev;
		*stack = current;
	}
	else
	{
		*stack = NULL;
	}

	free(aux);
}
