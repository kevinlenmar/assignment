#include<stdio.h>
#include<stdlib.h>
#include "./stack.h"
#include "./stack.c"

main(){
	
	struct StackNode* stackNode = createNode(2);
	
	int item = 0;
	int choices = 0;
	
	printf("[1]Push an item\n");
	printf("[2]Pop an item\n");
	printf("[3]Peek an item\n");
	printf("[4]Is the item empty?\n");
	printf("[5]Display\n");
	do{
		printf("Choose the following: ");
		scanf("%d", &choices);
		
		switch(choices){
			case 1: 
				printf("\nInput an item you want to put: ");
				scanf("%d", &item);
				push(stackNode, item);
				break;
			case 2:
				pop(stackNode);
				break;
			case 3: 
				peek(stackNode);
				break;
			case 4:
				if(isEmpty(stackNode) == 1){
					printf("The node is empty!\n");
				}else{
					printf("The node is not empty!\n");
				}
				break;
			case 5: display(stackNode);
				break;
			default: exit(0);
			
		}
		
	}while(choices != 0);
}
