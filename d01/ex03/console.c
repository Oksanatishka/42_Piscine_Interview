#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct s_stack *initStack(void)
{
	struct s_stack *stack = malloc(sizeof(struct s_stack));
	stack->item = NULL;
	return stack;
}

void push(struct s_stack *stack, int idx)
{
	if (!stack)
		return;
	struct s_item *new = malloc(sizeof(struct s_item));
	new->idx = idx;
	if (!stack->item)
	{
		new->next = NULL;
		stack->item = new;
		return;
	}
	new->next = stack->item;
	stack->item = new;
}

int pop(struct s_stack *stack)
{
	int idx;

	if (!stack)
		return 0;
	if (!stack->item)
		return 0;

	struct s_item *current = stack->item;
	stack->item = stack->item->next;
	idx = current->idx;
	free(current);
	return idx;
}

char *console(void)
{
	char *msg = calloc(1, 256);
	struct s_stack *stack = initStack();
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	int i = 0;
	int idx;

	while (1)
	{
		printf("console:> ");
	 	read = getline(&line, &len, stdin);
	 	if (!strncmp("UNDO", line, 4))
	 	{
	 		idx = pop(stack);
	 		memset(msg + idx, '\0', 256 - idx);
	 		i = idx;
	 	}
	 	else if (!strncmp("SEND", line, 4))
	 	{
	 		free(line);
	 		while (stack->item)
				pop(stack);
			free(stack);
			if (i > 0)
				msg[i - 1] = '\0';
			return msg;
	 	}
	 	else
	 	{
	 		push(stack, i);
	 		strncat(msg, line, read - 1);
	 		strncat(msg, " ", 1);
	 		i += read;
	 	}
	 	printf("%s\n\n", msg);
	}
	return NULL;
}
