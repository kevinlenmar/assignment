#include <stdio.h>
#include <stdlib.h>
#include "./ordered_list.h"

struct OrderedListNode* createNode(int item);

struct OrderedListNode* createNode(int item){
	
	struct OrderedListNode* orderNode = (struct OrderedListNode*) malloc(sizeof(struct OrderedListNode));
	
	orderNode->item = item;
	orderNode->next = NULL;
	
	return orderNode;
}

struct OrderedListNode* newOrder(){
	
	struct OrderedListNode* orderNode = createNode(0);
	return orderNode;
}

void add(struct OrderedListNode* order, int item){
	
	struct OrderedListNode* newItemNode = createNode(item);
	struct OrderedListNode* orderNode = order->next;
	
	while(orderNode != NULL){
		if(orderNode->next < newItemNode){
			
		}
	}
}

int isEmpty(struct OrderedListNode* order){
	
	int flag = 0;
	
	if(order->next == NULL){
		flag = 1;
	}
	
	return flag;
}
