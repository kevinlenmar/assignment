#include <stdio.h>
#include <stdlib.h>
#include "./queue.h"
#include "./queue.c"


main(){

	
	struct Queue* queue = createQueue(10);
	
	int item = 0;
	int choices = 0;
	
	printf("[1]Enqueue an item\n");
	printf("[2]Dequeue an item\n");
	printf("[3]Peek the start item\n");
	printf("[4]Peek the end item\n");
	printf("[5]Is the item empty?\n");
	printf("[6]Is the item full?\n");
	printf("[7]Display\n");
	do{
		printf("Choose the following: ");
		scanf("%d", &choices);
		
		switch(choices){
			case 1: 
				printf("\nInput an item you want to put: ");
				scanf("%d", &item);
				enqueue(queue, item);
				break;
			case 2:
				dequeue(queue);
				break;
			case 3: 
				peekStart(queue);
				break;
			case 4:
				peekEnd(queue);
				break;
			case 5:
				if(isEmpty(queue) == 1){
					printf("The queue is empty!\n");
				}else{
					printf("The queue is not empty!\n");
				}
				break;
			case 6:
				if(isFull(queue) == 1){
					printf("The queue is full!\n");
				}else{
					printf("The queue is not full!\n");
				}
				break;
			case 7: 
				display(queue);
				break;
			default: exit(0);
			
		}
		
	}while(choices != 0);
}
