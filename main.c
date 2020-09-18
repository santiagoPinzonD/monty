#include "monty.h"

/**
 * main -
 * @
 * @
 * Return: void.
 */

void main(int argc, char **argv)
{
	FILE *fd;
	unsigned int cont_line = 0;
	char *entry = NULL, **token, aux[1024];
	unsigned int num_line = 1;
	void (*funct)(stack_t **stack, unsigned int num_line);
	ssize_t numlines;
	int rd = 0;
	stack_t *stk = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if(fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (rd = getline(&entry, &numlines, fd) != EOF)
	{
		if (rd >= 1 && not_space(entry))
		{	
			cont_line++;
			printf("entry = %s\n", entry);
			token = strtoken(entry);
			printf("token[0] =  : %s\n", token[0]);
			printf("token[1] =  : %s\n", token[1]);
			strcpy(aux, token[0]);
			if (strcmp(aux, "") == 0)
			{
				num_line++;
				continue;
			}
			if (token[1])
			{
				number = atoi(token[1]);
			}
			funct = structure(token[0], num_line);
			funct(&stk, num_line);
		}
		num_line++;
	}
	fclose(fd);
	free()
}

int not_space(char *entry)
{
	unsigned int x;

	for (x = 0; x < strlen(entry) - 1; x++)
	{
		if (entry[x] != ' ')
		{
			return (1);
		}
	}
	return (0);
}
