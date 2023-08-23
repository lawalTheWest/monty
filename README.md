<h1>0x19. C - Stacks, Queues - LIFO, FIFO</h1>

From the data structure view point:

- Singly Linked Lists,
- Stacks, and
- Queues

are all data structures used in computer programming, but they serve different purposes and have distinct characteristics.
We discuss a brief overview of the differences between them in the context of the mighty C programming:

1. <b>Singly Linked List:</b>

	- A singly linked list is a linear data structure composed of nodes, where each node contains data and a reference (or pointer) to the next node in the list.
	- Linked lists are dynamic in nature, meaning that nodes can be easily inserted or removed.
	- Elements in a linked list are not stored in contiguous memory locations, unlike arrays.
	- Linked lists can be used to implement other data structures like stacks and queues.
	- Traversal of a linked list requires iterating through each node from the beginning to the end.

<em>Example:</em>
```
#include <stdio.h>
#include <stdlib.h>

/**
 * Node - Entry point to the struct type Node
 * @data: 'the data Integer'
 * @next: 'a poointer to the next node'
 */
typedef struct Node
{
	int data;
	struct Node *next;
}; /* END STRUCT */

/* FUNCTION PROTOTYPE */
void print_list(struct Node *head);

/**
 * main - Entry point to ytest the program
 * Return: 0
 */
int main(void)
{
	struct Node *head = NULL;
	struct Node *head1 = NULL;
	struct Node *head2 = NULL;

	head = malloc(sizeof(struct Node));
	head1 = malloc(sizeof(struct Node));
	head2 = malloc(sizeof(struct Node));

	head->data = 1;
	head->next = head1;

	head1->data = 2;
	head1->next = head2;

	head2->data = 3;
	head2->next = NULL;

	print_list(head);

	return 0;

} /* END FUNCTION */



/**
 * printList - Entry point to print the nodes in list
 * @head: pointer to the first node
 */
void print_list(struct Node *head)
{
        while (!(head == NULL))
        {
                printf("%d -> ", head->data);
                head = head->next;
        } /* end while */

        printf("NULL\n");

} /* END FUNCTION */

```



2. <b>Stack:</b>

	- A `stack` is a linear data structure that follows the `Last-In-First-Out (LIFO) principle`. <em>The last element pushed onto the stack is the first one to be popped off.</em>

	- Stacks can be implemented using arrays or linked lists.
	- Common operations on stacks include:

		+ Pushing (adding an element to the top) and
		+ Popping (removing an element from the top).

	- `Stacks` are used for managing:

		+ function calls,
		+ expression evaluation,
		+ backtracking algorithms, and more.

```
/* The LIFO - Last-In-First-Out Principle */

#include <stdio.h>
#include <stdlib.h>

#define buffer 10

struct Stack
{
	int arr[buffer];
	int top;
}; /* end struct type */


/* FUNCTION PROTOTYPES */

int pop(struct Stack *stack);
void push(struct Stack *stack, int data);


/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	struct Stack stack;
	stack.top = -1;

	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);

	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));

	return 0;

} /* END FUNCTION */


/**
 * push - Entry point
 * @stack: the stack
 * @data: data to be added to stack
 */
void push(struct Stack *stack, int data)
{
        if (stack->top == buffer - 1)
        {
                printf("Stack overflow\n");
                return;
        } /* End if */

        stack->arr[++stack->top] = data;

} /* END FUNCTION */

/**
 * pop - Entry point
 * Description: 'to remove and retrieve
 * the top element of the stack'
 * @stack: stackl to be poped
 * Return: returns the value of the removed element
 */
int pop(struct Stack *stack)
{
        if (stack->top == -1)
        {
                printf("Stack underflow\n");
                return -1;
        } /* end if */

        return (stack->arr[stack->top--]);

} /* END FUNCTION */

```


3. <b>Queue:</b>

	- A `queue` is `a linear data structure that follows the First-In-First-Out (FIFO) principle`. <em>The first element enqueued is the first one to be dequeued.</em>
	- `Queues` can be implemented using arrays or linked lists.
	- Common operations on `queues` include:

		+ enqueue (adding an element to the back) and
		+ dequeue (removing an element from the front).

	- `Queues` are used for scenarios where elements are processed in the order they arrive, `like in scheduling`, and more.

<b>example</b>
```

```


- Singly Linked List: A dynamic linear data structure made up of nodes, useful for maintaining a collection of data with flexible insertion and removal.
- Stack: A linear data structure with LIFO behavior, often used for managing function calls, expression evaluation, and undo operations.
- Queue: A linear data structure with FIFO behavior, commonly used for scenarios involving scheduling and breadth-first processing.

******************************************************************
<h6>Lawal Tajudeen O.</h6>
<h6>Isa Sulaiman Isa</h6>

<h6>ALX SE</h6>
