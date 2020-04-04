#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
typedef struct node *treePointer;
typedef struct node
{
	int data;
	treePointer leftChild, rightChild;
};
int rear = -1;
int front = -1;
treePointer queue[MAX];
int Search(treePointer* tree, int k) //找尋k是否在此樹中
{
	treePointer leaf;
	treePointer tree2 = *tree;
	while (tree2)
	{
		if (k == tree2->data)
		{
			return 1;
		}
		else if (k < tree2->data)
		{
			tree2 = tree2->leftChild;
		}
		else if (k > tree2->data)
		{
			tree2 = tree2->rightChild;
		}
	}
	printf("%d is not in the tree\n", k);
	return 0;
}
void insert(treePointer* tree, int k)
{
	treePointer temp = *tree;
	treePointer ptr = (treePointer)malloc(sizeof(struct node)); //創新空間給k
	ptr->data = k;
	ptr->leftChild = NULL;
	ptr->rightChild = NULL;
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			if (k < temp->data)
			{
				if (temp->leftChild == NULL)
				{
					temp->leftChild = ptr;
					break;
				}
				else
				{
					temp = temp->leftChild;
				}
			}
			else if (k>temp->data)
			{
				if (temp->rightChild == NULL)
				{
					temp->rightChild = ptr;
					break;
				}
				else
				{
					temp = temp->rightChild;
				}
			}
		}
	}
	else
	{
		*tree = ptr;
	}
}
void del(treePointer* treeptr, int k)
{
	int con = 0;
	treePointer temp = *treeptr, temp1 = *treeptr;
	treePointer parent = NULL;
	while (temp)
	{
		if (k < temp->data)
		{
			con = 1;
			parent = temp;
			temp = temp->leftChild;
		}
		else if (k>temp->data)
		{
			con = 2;
			parent = temp;
			temp = temp->rightChild;
		}
		else if (k == temp->data)
		{
			break;
		}
	}
	start1:
	if ((temp->rightChild)==NULL&&(temp->leftChild)==NULL)
	{
		if (con == 1)
		{
			free(parent->leftChild);
			parent->leftChild = NULL;
		}
		if (con == 2)
		{
			free(parent->rightChild);
			parent->rightChild = NULL;
		}
		if (con == 0)
		{
			free(*treeptr);
			*treeptr = NULL;
		}
	}
	else if ((temp->rightChild) == NULL&&(temp->leftChild) != NULL)
	{
		if(parent!=NULL)
		{
			if (parent->data < temp->data)
			{
				parent->rightChild = temp->leftChild;
				temp->leftChild = NULL;
				free(temp);
			}
			else
			{
				parent->leftChild = temp->leftChild;
				temp->leftChild = NULL;
				free(temp);
			}
		}
		else
		{
			*treeptr = (*treeptr)->leftChild;
		}
	}
	else if ((temp->rightChild) != NULL&&(temp->leftChild) == NULL)
	{
		if (parent != NULL)
		{
			if (parent->data < temp->data)
			{
				parent->rightChild = temp->rightChild;
				temp->rightChild = NULL;
				free(temp);
			}
			else
			{
				parent->leftChild = temp->rightChild;
				temp->rightChild = NULL;
				free(temp);
			}
		}
		else
		{
			*treeptr=(*treeptr)->rightChild;
		}
	}
	else if ((temp->rightChild) != NULL && (temp->leftChild) != NULL)
	{
		temp1 = temp;
		treePointer temp11;
		temp1 = temp1->leftChild;
		while (temp1)
		{
			temp11 = temp1;
			if (temp1->rightChild != NULL)
			{
				temp1 = temp1->rightChild->rightChild;
			}
			else
			{
				break;
			}
		}
		if (temp11->rightChild != NULL)
		{
			temp->data = temp11->rightChild->data;
			if (temp11->rightChild->leftChild != NULL)
			{
				temp = temp11->rightChild;
				parent = temp11;
				goto start1;
			}
			else
			{
				free(temp11->rightChild);
				temp11->rightChild = NULL;
			}
		}
		else
		{
			temp->data = temp11->data;
			temp->leftChild = temp11->leftChild;
			free(temp11);
			temp11 = NULL;
		}
	}
}
treePointer clean(treePointer now)
{
	if (now == NULL)
		return NULL;
	now->leftChild = clean(now->leftChild);
	now->rightChild = clean(now->rightChild);
	if (now->data == -1)
	{
		free(now);
		return NULL;
	}
	else
		return now;
}
int treeheight(treePointer h_root)
{
	//走到樹的各末端
	if (h_root == NULL)
	{
		return 0;
	}
	else
	{
		if (treeheight(h_root->leftChild)>treeheight(h_root->rightChild))
		{
			return treeheight(h_root->leftChild) + 1;
		}
		else
		{
			return treeheight(h_root->rightChild) + 1;
		}
	}
}
void queueFull()
{
	fprintf(stderr, "佇列已滿");
	exit(EXIT_FAILURE);
}
void addq(treePointer item)
{
	if (rear == MAX - 1)
		queueFull();
	queue[++rear] = item;
}
treePointer deleteq()
{
	if (front == rear)
		return NULL;
		return queue[++front];
}
void levelorder(treePointer ptr)
{
	int height = treeheight(ptr);
	int front = 0, rear = 0, prev = 1, next = 1;
	if (!ptr)
	{
		return;
	}
	addq(ptr);
	for (;;)
	{
		ptr = deleteq();
		if (ptr)
		{
			if (ptr->leftChild)
			{
				addq(ptr->leftChild);
			}
			if (ptr->leftChild == NULL&&height > 1)
			{
				treePointer ptr123 = (treePointer)malloc(sizeof(struct node)); //創新空間給'*'
				ptr123->data = -1;
				ptr123->leftChild = NULL;
				ptr123->rightChild = NULL;
				ptr->leftChild = ptr123;
				addq(ptr->leftChild);
			}
			if (ptr->rightChild)
			{
				addq(ptr->rightChild);
			}
			if (ptr->rightChild == NULL&&height > 1)
			{
				treePointer ptr123 = (treePointer)malloc(sizeof(struct node)); //創新空間給'*'
				ptr123->data = -1;
				ptr123->leftChild = NULL;
				ptr123->rightChild = NULL;
				ptr->rightChild = ptr123;
				addq(ptr->rightChild);
			}
			if (ptr->data == -1)
			{
				printf("*   ");
			}
			else
			{
				printf("%-3d ", ptr->data);
			}
			if (prev == next)
			{
				printf("\n");
				next = next + (next + 1);
				height--;
			}
			prev++;
		}
		else
			break;
	}
}
int main(void)
{
	int height;
	treePointer root_ptr = NULL;
	int i = 0, element;
	char num[MAX],con;
	scanf("%s", &num);
	char *out = strtok(num, ",");
	while (out != NULL)
	{
		insert(&root_ptr, atoi(out));
		out = strtok(NULL, ",");
	}
	printf("Create Binary search tree\n");
	printf("\n");
	levelorder(root_ptr);
	clean(root_ptr);
	printf("\n");
	while (1)
	{
		start:
		printf("Delete element?(Y/N):");
		scanf(" %c", &con);
		if (con != 'Y')
		{
			break;
		}
		printf("Choice element:");
		scanf("%d", &element);
		if (Search(&root_ptr, element) == 0)
		{
			goto start;
		}
		del(&root_ptr, element);
		printf("Binary search tree\n");
		printf("\n");
		levelorder(root_ptr);
		clean(root_ptr);
		printf("\n");
	}
	system("pause");
	return 0;
}