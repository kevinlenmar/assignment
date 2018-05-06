#ifndef ORDERED_LIST_H
#define ORDERED_LIST_H

struct OrderedListNode{
	int item;
	struct OrderedListNode* next;
};

struct OrderedListNode* newOrder();
void add(struct OrderedListNode* order, int item);
void removed(struct OrderedListNode* order);
void shiftRight(struct OrderListNode* order);
int isEmpty(struct OrderedListNode* order);

#endif
