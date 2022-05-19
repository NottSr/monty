#include "monty.h"
/**
 * check_dig - function that checks if a str is an int
 * @param: Parameter to check
 * Return: 0 if success -1 if error
 */
int check_dig(char *param)
{
	while (*param != '\0')
	{
		if (param[0] == 45)
		{
			++param;
			continue;
		}

		if (isdigit(*param) == 0)
			return (-1);

		++param;
	}
	return (0);
}
