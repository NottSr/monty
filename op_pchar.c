#include "monty.h"
/**
 * pchar - function that prints all values of a stack
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void pchar(stack_t **stack, unsigned int line_num)
{
	if (*stack)
	{
		if ((*stack)->n > 32 && (*stack)->n < 127)
		{
			printf("%c\n", (*stack)->n);
		}
		else
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
}
