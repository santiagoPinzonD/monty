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
	char *entry = NULL, **token;
	unsigned int num_line = 1;
	void (*funct)(stack_t **stack, unsigned int num_line);
	ssize_t numlines;

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

	while (getline(&entry, &numlines, fd) != EOF)
	{
		token = strtoken(entry);
		printf("xd %s", token[0]);
		funct = structure(token[0], num_line);
		num_line++;
	}
	fclose(fd);
}
