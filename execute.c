#include "monty.h"


/**
 * execute - execute monty code
 * @head: head of stack
 * @line: line of monty code
 * @line_number: current line number
 * Return: 0
 */
int execute(stack_t **head, char *line, int line_number)
{
	instruction_t instructions[] = {
					{"push", _push},
					{"pall", _pall},
					{"pint", _pint},
					{"pop", _pop},
					{"swap", _swap}
					};
	int opcode_found = 0;
	size_t i = 0;

	mycommand.opcode = strtok(line, " \n\t");
	mycommand.arg = strtok(NULL, " \n\t");

	while (i < sizeof(instructions) / sizeof(instructions[0]))
	{
		if (strcmp(mycommand.opcode, instructions[i].opcode) == 0)
		{
			instructions[i].f(head, line_number);
			opcode_found = 1;
			break;
		}
		i++;
	}
	if (opcode_found == 0)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, mycommand.opcode);
		return (EXIT_FAILURE);
	}
	return (0);
}
