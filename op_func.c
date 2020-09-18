#include "monty.h"
/**
 * push - 
 * @top:  pointer.
 * @num_line: line number.
 * Return: void.
 */
void push(stack_t **head, unsigned int num_line)
{
	/*oid)num_line;*/
	/*oid)head;*/	
	stack_t *auxNode;
	(void)num_line;

	auxNode = malloc(sizeof(stack_t));
	if (!auxNode)
		printf("error of malloc");
	printf("number = %d\n", number);
	auxNode->n = number;
	auxNode->prev = NULL;
	if (*head == NULL)
	{
		auxNode->next = NULL;
		*head = auxNode;
	}
	else
	{
		auxNode->next = *head;
		(*head)->prev = auxNode;
		*head = auxNode;
	}
}
/**
 *
 *
 *
 */
void pall(stack_t **head, unsigned int num_line)
{
	stack_t *auxNode;
	(void)num_line;

	auxNode = *head;
	while (auxNode != NULL)
	{
		fprintf(stdout, "%d\n", (auxNode)->n);
		(auxNode) = (auxNode)->next;
	}
}
