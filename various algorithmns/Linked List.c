#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE {
	int data;
	struct NODE* next;
}NODE;

void insert_node(NODE* prev_node, int data) {
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	if (new_node == NULL) return -1;

	new_node->data = data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

void delete_node(NODE* prev_node, NODE* del_node) {
	prev_node->next = del_node->next;
	free(del_node);
}



int main() {

	NODE* head = (NODE*)malloc(sizeof(NODE));
	if (head == NULL) return -1;

	NODE* node1 = (NODE*)malloc(sizeof(NODE));
	if (node1 == NULL) return -1;

	head->next = node1;
	node1->data = 10;

	NODE* node2 = (NODE*)malloc(sizeof(NODE));
	if (node2 == NULL) return -1;

	node1->next = node2;

	node2->data = 20;
	node2->next = NULL;

	NODE* curr = head->next;
	if (curr == NULL) return -1;

	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}
