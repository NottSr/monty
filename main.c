#include "monty.h"

/** Global Variable*/
stack_t *head = NULL;

/**
 * main - Main function
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Success
 */
int main(int argc, char *argv[])
{
	FILE *cFile = NULL;
	size_t l_len = 0;
	ssize_t l_char = 0;
	unsigned int line = 0;
	char *fName = argv[1], *buffer = NULL, *OpCode = NULL, *Oparam = NULL;
	void (*op_ch)(stack_t **, unsigned int);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	cFile = fopen(fName, "r");
	if (cFile == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fName);
		exit(EXIT_FAILURE);
	}

	while ((l_char = getline(&buffer, &l_len, cFile)) != -1)
	{
		OpCode = strtok(buffer, "\t\n ");
		if (OpCode)
		{
			Oparam = strtok(NULL, "\t\n ");
			op_ch = func_selec(OpCode);
			if(op_ch == NULL)
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", line, OpCode);
				exit(EXIT_FAILURE);
			}
			if (strcmp(OpCode, "push") == 0)
			{
				op_ch(&head, atoi(Oparam));
			}
			else
			{
				op_ch(&head, line);
			}
		}
		line++;
	}
	free_s();
	free(buffer);
	fclose(cFile);
	return (0);
}
