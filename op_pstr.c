#include "monty.h"
/**
 * pstr - function that prints the string starting at the top of the stack
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void pstr(stack_t **stack, unsigned int line_num)
{
	stack_t *current = NULL;

	UNUSED(line_num);
	if (*stack)
	{
		current = *stack;
		while (current)
		{
			if (current->n == 0 || current->n < 0 || current->n > 127)
				break;

			printf("%c", current->n);
			current = current->next;
		}
	}
	printf("\n");
}
