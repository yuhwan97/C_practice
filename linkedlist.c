#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef struct node_st {
	int element;
	struct node_st* next;
} node;

void Push(node* head, int new_element);
void deleteNode(node* head, int position);

void Push(node* head, int new_element) {
	node* new_node = (node*)malloc(sizeof(node));

	new_node->element = new_element;
	new_node->next = head->next;
	head->next = new_node;
}

void addNode(node* head, int position, int new_element)
{
	node* tmp_node = head;
	while (--position != 0)
		tmp_node = tmp_node->next;
	node* tmp_node2 = tmp_node->next;
	node* new_node = (node*)malloc(sizeof(node));

	new_node->element = new_element;
	tmp_node->next = new_node;
	new_node->next = tmp_node2;
}

void deleteNode(node* head, int position)
{
	node* tmp_node = (node*)malloc(sizeof(node));
	node* delet = (node*)malloc(sizeof(node));
	while (position-- != 0) {
		tmp_node = head->next;
	}
	delet = tmp_node->next;
	tmp_node->next = tmp_node->next->next;
	free(delet);
}

void printList(node* head)
{
	node* list = head->next;
	while (list != NULL)
	{
		printf(" %d ", (int*)list->element);
		list = list->next;
	}
	printf("\n");
}

int main() {
	int pos, sel, add;

	node* head = (node*)malloc(sizeof(node));
	head->next = NULL;

	Push(head, 1);
	Push(head, 2);
	Push(head, 3);
	Push(head, 4);
	Push(head, 5);
	printf("Linked List: ");
	printList(head);
	printf("1. delet node\t2. add node\n");
	scanf("%d", &sel);
	printf("Select position: ");
	scanf("%d", &pos);
	if (sel == 1) {
		printf("Linked List after deletion at position %d: ", pos);
		deleteNode(head, pos);
	}
	else if (sel == 2) {
		printf("enter element:");
		scanf("%d", &add);
		printf("Linked List after add at position %d: ", pos);
		addNode(head, pos, add);
	}

	printf("Linked List: ");
	printList(head);

	return 0;
}
