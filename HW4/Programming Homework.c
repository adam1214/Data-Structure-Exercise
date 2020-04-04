#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef struct Node *nodePointer;
struct Node
{
	int data;
	nodePointer link;
};

nodePointer XOR(nodePointer l, nodePointer r)
{
	return (nodePointer)((uintptr_t)(l) ^ (uintptr_t)(r)); /*保證跟指標一樣大的int*/
}
void creat_head_trail_linked_list(nodePointer* head, nodePointer* trail)
{
	int data = 1;
	nodePointer newnode, lastnode = NULL;
	int if_firstnode = 1;
	while (data <= 20)
	{
		lastnode = *trail;
		newnode = malloc(sizeof(struct Node));
		newnode->data = data;
		newnode->link = XOR(lastnode, NULL);
		if (lastnode != NULL)
		{
			nodePointer left = XOR(lastnode->link, NULL);/*未有newnode 之前,lastnode->link=left^NULL,再做一個NULL產生left*/
			lastnode->link = XOR(newnode, left);
		}
		else
		{
			if_firstnode = 0;
			*head = newnode;
		}
		lastnode = newnode;
		*trail = lastnode;
		data++;
	}
}
void printListLTR(nodePointer* head,nodePointer* trail)
{
	nodePointer curr = *head;
	nodePointer prev = NULL;
	nodePointer next;
	int k = 1;
	printf("The data from left to right:\n");
	while (curr != NULL)
	{
		// print current node
		printf("%d", curr->data);
		if (k<20)
		{
			printf(", ");
		}
		next = XOR(prev, curr->link);
		prev = curr;
		curr = next;
		k++;
	}
	printf("\n\n");
}
void insert(nodePointer *head, int data)
{
	nodePointer newnode = malloc(sizeof(struct Node));
	nodePointer lastnode = *head;
	newnode->data = data;
	newnode->link = XOR(lastnode, NULL);
	if (lastnode != NULL)
	{
		nodePointer left = XOR(lastnode->link, NULL);/*未有newnode 之前,lastnode->link=left^NULL,再做一個NULL產生left*/
		lastnode->link = XOR(newnode, left);
	}
	*head = newnode;
}
void printListRTL(nodePointer head)
{
	nodePointer curr = head;
	nodePointer prev = NULL;
	nodePointer next;
	int k = 1;
	printf("The data from right to left:\n");
	while (curr != NULL)
	{
		// print current node
		printf("%d", curr->data);
		if (k<20)
		{
			printf(", ");
		}
		next = XOR(prev, curr->link);
		prev = curr;
		curr = next;
		k++;
	}
	printf("\n\n");
}



int main(void)
{

	nodePointer headl = NULL, head = NULL, trail = NULL;
	creat_head_trail_linked_list(&head, &trail);
	printListLTR(&head, &trail);

	insert(&headl, 1);
	insert(&headl, 2);
	insert(&headl, 3);
	insert(&headl, 4);
	insert(&headl, 5);
	insert(&headl, 6);
	insert(&headl, 7);
	insert(&headl, 8);
	insert(&headl, 9);
	insert(&headl, 10);
	insert(&headl, 11);
	insert(&headl, 12);
	insert(&headl, 13);
	insert(&headl, 14);
	insert(&headl, 15);
	insert(&headl, 16);
	insert(&headl, 17);
	insert(&headl, 18);
	insert(&headl, 19);
	insert(&headl, 20);

	printListRTL(headl);

	system("pause");
	return  0;
}
