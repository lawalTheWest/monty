#include "monty.h"
/**
 * _push - push to stack
 * @head: head of stack
 * @line_number: current line number
 */
void _push(stack_t **head, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));
	int n = atoi(mycommand.arg);
	(void)line_number;

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
}
