#ifndef QUEUE_H
#define QUEUE_H

struct Queue{
	int start;
	int end;
	int size;
	int *array;
	int capacity;
};

struct Queue* newQueue();
void display(struct Queue* queue);
void enqueue(struct Queue* queue, int item);
void dequeue(struct Queue* queue);
void peekStart(struct Queue* queue);
void peekEnd(struct Queue* queue);
int isFull(struct Queue* queue);
int isEmpty(struct Queue* queue);

#endif
