#include "monty.h"
/**
 * _swap - swap top of stack
 * @head: pointer to head
 * @line_number: line number
 * Return: 0 on success
 */
void _swap(stack_t **head, unsigned int line_number)
{
	unsigned int n = line_number;
	stack_t *temp = *head;
	stack_t *after = (*head)->next;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
	temp->next = after->next;
	temp->prev = after;
	after->prev = NULL;
	after->next = temp;
	*head = after;
}
