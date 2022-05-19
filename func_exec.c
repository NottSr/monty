#include "monty.h"
/**
 * func_exec - Function that execute the Monty code
 * @OpCode: Monty code
 * @Oparam: Monty code parameter
 * @line: number of lines
 * Return: Void
 */
void func_exec(char *OpCode, char *Oparam, unsigned int line)
{
	void (*op_ch)(stack_t **, unsigned int);

	op_ch = func_selec(OpCode);
	if (op_ch)
	{
		if (strcmp(OpCode, "push") == 0)
		{
			if (Oparam == NULL)
			{
				fprintf(stderr, "L%d: usage: push integer\n", line);
				exit(EXIT_FAILURE);
			}
			op_ch(&head, atoi(Oparam));
		}
		else
		{
			op_ch(&head, line);
		}
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, OpCode);
		exit(EXIT_FAILURE);
	}
}
