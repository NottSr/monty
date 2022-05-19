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
	unsigned int line = 1;
	char *fName = argv[1], *buffer = NULL, *OpCode = NULL, *Oparam = NULL;

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
			if(OpCode[0] == '#')
			{
				line++;
				continue;
			}
			Oparam = strtok(NULL, "\t\n ");
			func_exec(OpCode, Oparam, line);
		}
		line++;
	}
	free_s();
	free(buffer);
	fclose(cFile);
	return (0);
}
