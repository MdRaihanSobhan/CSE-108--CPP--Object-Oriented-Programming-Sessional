#include <stdio.h>

#define SIZE 10

struct stack
{
    char s[SIZE]; // holds the stack
    int top; // index of top of stack
};

void init(struct stack *st)
{
	st->top = 0;
}

// Push a character
void push(struct stack *st, char c)
{
	if(st->top == SIZE)
	{
		printf("Stack is full");
		return;
	}
	st->s[st->top++] = c;
}

// Pop a character
char pop(struct stack *st)
{
	if(st->top == 0)
	{
		printf("Stack is empty");
		return 0; // return null on empty stack
	}
	return st->s[--st->top];
}

int isEmpty(struct stack *st)
{
    return st->top == 0;
}

int main(void)
{
	struct stack st1,st2;
	init(&st1);

	push(&st1,'a');
	push(&st1,'b');
	push(&st1,'c');

    while(!isEmpty(&st1))
	{
		printf("Pop stack: %c\n", pop(&st1));
	}

	return 0;
}
