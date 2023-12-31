#include "monty.h"
/**
 * _add - add top of stack
 * @head: pointer to head
 * @line_number: line number
 * Return: 0 on success
 */
void _add(stack_t **head, unsigned int line_number)
{
	unsigned int n = line_number;
	stack_t *temp = *head;
	stack_t *after = (*head)->next;
	int a, b, sum;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
	a = temp->n;
	b = after->n;
	sum = a + b;
	free(temp);
	after->prev = NULL;
	after->n = sum;
	*head = after;
}
