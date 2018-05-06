#ifndef STACK_H
#define STACK_H

struct StackNode{
	int item;
	struct StackNode* next;
};

struct StackNode* newStack();
void push(struct StackNode* stack, int item);
void pop(struct StackNode* stack);
void peek(struct StackNode* stack);
int isEmpty(struct StackNode* stack);
void display(struct StackNode* stack);

#endif
