#include "monty.h"
/**
 * add - function that adds the top two elements of the stack
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void add(stack_t **stack, unsigned int line_num)
{
	stack_t *aux = *stack;
	size_t len = 0;
	unsigned int a = 0, b = 0;

	len = stalen(*stack);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	a = aux->n;
	b = (aux->next)->n;
	(aux->next)->n = a + b;
	*stack = aux->next;
	free(aux);
}
