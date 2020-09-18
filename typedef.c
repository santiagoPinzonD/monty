#include "monty.h"

/**
 *  
 */

void (*structure(char *str, unsigned int n))(stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0;
	printf("entre a structure\n");
	instruction_t iopcode[]=
	{
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	while (iopcode[i].opcode)
	{
		
		if (strcmp(str, iopcode[i].opcode) == 0)
		{
			return (iopcode[i].f);
		}
		i++;
	}
	return (NULL);
}
