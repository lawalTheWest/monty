#include "monty.h"
/**
 * _pall - display items in stack
 * @head: pointer to head
 * @line_number: line number
 * Return: void
 */
void _pall(stack_t **head, unsigned int line_number)
{

	stack_t *temp = *head;
	(void)line_number;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
