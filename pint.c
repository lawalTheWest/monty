#include "monty.h"
/**
 * _pint - display top of stack
 * @head: pointer to head
 * @line_number: line number
 * Return: 0 on success
 */
void _pint(stack_t **head, unsigned int line_number)
{
	unsigned int n = line_number;
	stack_t *temp = *head;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", n);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}
