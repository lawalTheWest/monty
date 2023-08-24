#define _GNU_SOURCE
#include <stdio.h>
#include "monty.h"
/**
 * main - Entry point for monty interpreter
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	FILE *myfile;
	size_t len = 0;
	char *line = NULL;
	unsigned int line_number = 1;
	stack_t *head = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	myfile = fopen(argv[1], "r");
	if (myfile == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &len, myfile) != -1)
	{
		execute(&head, line, line_number);
		line_number++;
	}
	fclose(myfile);
	free(line);
	return (0);
}
