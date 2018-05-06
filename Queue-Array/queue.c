#include <stdio.h>
#include <stdlib.h>
#include "./queue.h"


struct Queue* createQueue(int capacity);

struct Queue* createQueue(int capacity){
	
	struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));
	
	queue->array = (int*) malloc(sizeof(int) * queue->capacity);
	queue->capacity = capacity;
	queue->size = 0;
	queue->start = 0;
	queue->end = capacity - 1;
	
	return queue;
}

struct Queue* newQueue(){
	
	struct Queue* queue = createQueue(0);
	return queue;
}

void display(struct Queue* queue){
	
	int ctr = 0;
	int i = queue->start;
	
	if(isEmpty(queue) == 1){
		printf("This queue is empty!\n");
	}else{
		
		for(ctr = 0; ctr < queue->size; ctr++){
			printf("[%d] %d\n", ctr, queue->array[i]);
			i = (i + 1) % queue->capacity;
		}
	}
}

void enqueue(struct Queue* queue, int item){
	
	if(isFull(queue) == 1){
		printf("The queue is full!\n");
	}else{
		queue->end = (queue->end + 1) % queue->capacity;
		queue->array[queue->end] = item;
		queue->size++;
		printf("%d enqueued to queue\n", item);
	}
}

void dequeue(struct Queue* queue){
	
	if(isEmpty(queue) == 1){
		printf("The queue is empty!\n");
	}else{
		int item = queue->array[queue->start];
		queue->start = (queue->start + 1) % queue->capacity;
		queue->size--;
		printf("%d dequeued from queue\n", item);
	}
}

void peekStart(struct Queue* queue){
	
	if(isEmpty(queue) == 1){
		printf("The queue is empty!\n");
	}else{
		printf("Start: %d\n", queue->array[queue->start]);
	}
}

void peekEnd(struct Queue* queue){
	
	if(isEmpty(queue) == 1){
		printf("The queue is empty!\n");
	}else{
		printf("End: %d\n", queue->array[queue->end]);
	}
}

int isFull(struct Queue* queue){
	
	int flag = 0;
	
	if(queue->size == queue->capacity){
		flag = 1;
	}
	
	return flag;
}

int isEmpty(struct Queue* queue){
	
	int flag = 0;
	
	if(queue->size == 0){
		flag = 1;
	}
	
	return flag;
}
