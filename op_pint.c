#include "monty.h"
/**
 * pint - function that prints all values of a stack
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
