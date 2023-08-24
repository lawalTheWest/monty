#include "monty.h"
/**
 * _pop - remove top of stack
 * @head: pointer to head
 * @line_number: line number
 * Return: 0 on success
 */
void _pop(stack_t **head, unsigned int line_number)
{
	unsigned int n = line_number;
	stack_t *temp = *head;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", n);
		exit(EXIT_FAILURE);
	}
	*head = temp->next;
	free(temp);
}
