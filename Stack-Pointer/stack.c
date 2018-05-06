// C pointer implementation of stack

#include<stdio.h>
#include<stdlib.h>
#include "./stack.h"

struct StackNode* createNode(int item);

struct StackNode* createNode(int item){
	
	struct StackNode* stackNode = (struct StackNode*) malloc(sizeof(struct StackNode));
	
	stackNode->item = item;
	stackNode->next = NULL;
	
	return stackNode;
}

struct StackNode* newStack(){
	
	struct StackNode* stackNode = createNode(0);
	return stackNode;
}

void display(struct StackNode* stack){
	
	struct StackNode* stackNode = stack->next;
	
	if(isEmpty(stack) == 1){
		printf("The node is empty!\n");
	}else{
		
		while(stackNode != NULL){
			printf("%d\n", stackNode->item);
			stackNode = stackNode->next;
		}	
	}
	
}

void push(struct StackNode* stack, int item){
	
	struct StackNode* stackNode = createNode(item);
	
	stackNode->next = stack->next;
	stack->next = stackNode;
	
	printf("%d pushed to stack\n\n", item);
}

void pop(struct StackNode* stack){
	
	if(isEmpty(stack) == 1){
		printf("The node is empty!\n");
	}else{
		struct StackNode* stackNode = stack->next;
		struct StackNode* previous = stack;
		int item = stackNode->item;
		
		previous->next = stackNode->next;
		
		free(stackNode);
		stackNode = NULL;
		
		printf("\n%d popped from stack\n\n", item);	
	}
}

void peek(struct StackNode* stack){
	
	if(isEmpty(stack) == 1){
		printf("The node is empty!\n");
	}else{
		
		struct StackNode* stackNode = stack->next;
		int item = stackNode->item;
	
		printf("Peek: %d\n", item);
	}
}

int isEmpty(struct StackNode* stack){
	
	int flag = 0;
	
	if(stack->next == NULL){
		flag = 1;
	}
	
	return flag;
}
