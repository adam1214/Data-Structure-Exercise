#include<stdio.h>
#include<stdlib.h>
typedef struct node *nodePointer;
typedef struct node
{
	int vertex;
	nodePointer link;
};
typedef struct hdnodes
{
	int count;
	nodePointer link;
};
#define MAX 100
void topSort(struct hdnodes graph[MAX], int n, int ee[MAX], int input[100][4])
{
	int i, j, k, top;
	nodePointer ptr;
	top = -1;
	for (i = 0; i < n; i++) //建立堆疊來存取無先行點的vertex
	{
		if (graph[i].count == 0)
		{
			graph[i].count = top;
			top = i;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (top == -1)
		{
			//fprintf(stderr, "\nNetwork has a cycle. Sort terminated.\n");
			//exit(EXIT_FAILURE);
			break;
		}
		else
		{
			j = top;
			top = graph[top].count;
			//printf("v%d ", j);
			for (ptr = graph[j].link; ptr; ptr = ptr->link)
			{
				k = ptr->vertex;
				int m;
				for (m = 0; m < n; m++)
				{
					if (input[m][1] == j&&input[m][2] == k)
					{
						break;
					}
				}
				if (ee[k] < ee[j] + input[m][3])
				{
					ee[k] = ee[j] + input[m][3];
				}
				graph[k].count--;
				if (graph[k].count == 0)
				{
					graph[k].count = top;
					top = k;
				}
			}
		}
	}
}
int main(void)
{
	int active_num, i, input[100][4], j, cnt = 0;
	scanf("%d", &active_num);
	for (i = 0; i < active_num; i++)
		for (j = 0; j < 4; j++)
		{
			scanf(" %d", &input[i][j]);
		}
	struct hdnodes graph[MAX]; //開始做graph[]
	for (i = 0; i < active_num; i++)
	{
		for (j = 0; j < active_num; j++)
		{
			if (input[j][2] == i)
			{
				cnt++;
			}
		}
		graph[i].count = cnt; //算出graph[].count，還有.link
		cnt = 0;
	}
	for (i = 0; i < active_num; i++) //初始化graph後面的link
	{
		graph[i].link = NULL;
	}

	for (i = 0; i < active_num; i++)
	{
		int con = 0;
		nodePointer  temp_node = (nodePointer)malloc(sizeof(struct node)); //創新空間存graph[]後面的鏈結
		temp_node->vertex = input[i][2];
		temp_node->link = NULL;
		int a = input[i][1];
		nodePointer  temp = (nodePointer)malloc(sizeof(struct node));
		nodePointer  temp_prv = (nodePointer)malloc(sizeof(struct node));
		for (temp = graph[a].link; temp != NULL; temp = temp->link) //走到graph[]的最後鏈結
		{
			con = 1;
			temp_prv = temp;
		}
		if (con == 1)
		{
			temp_prv->link = temp_node;
		}
		if (con == 0)
		{
			graph[a].link = temp_node;
		}
	}
	int asd = input[0][2];
	for (i = 1; i < active_num; i++) //找最大編號的event
	{
		if (input[i][2] > asd)
		{
			asd = input[i][2];
		}
	}
	int ee[MAX] = { 0 };
	for (i = 0; i <= asd; i++)
	{
		int end = input[i][2];
		int start = input[i][1];
		ee[end] = ee[start] + input[i][3];
	}
	topSort(graph, active_num, ee, input);
	int l[MAX] = { 0 };
	l[asd] = ee[asd]; //最後一個event
	int t, c = 0;
	for (i = asd - 1; i >= 0; i--) //已event為主，往回搜尋
	{
		t = -1;
		c = 0;
		for (j = 0; j < active_num; j++) //在input二維陣列內找起點終點
		{
			if (input[j][1] == i)
			{
				c = 1;
				l[i] = l[input[j][2]] - input[j][3];
				if (t != -1)
				{
					if (t < l[i])
					{
						l[i] = t;
					}
				}
			}
			if (c == 1)
			{
				t = l[i];
			}
		}
	}
	printf("\na.\n\n");
	printf("    e   l\n");
	for (i = 0; i <= asd; i++)
	{
		printf("%-4d%-4d%-4d\n", i, ee[i], l[i]);
	}
	int a_ee[MAX] = { 0 }, tt[MAX] = { 0 }, s[MAX] = { 0 };
	char cc[MAX];
	int count1 = 0;
	int st, en;
	for (i = 1; i <= active_num; i++) //先做a_ee[MAX]
	{
		st = input[i - 1][1];
		a_ee[i] = ee[st];
	}
	for (i = active_num; i > 0; i--)
	{
		en = input[i - 1][2];
		tt[i] = l[en] - input[i - 1][3];
	}
	for (i = 1; i <= active_num; i++)
	{
		s[i] = tt[i] - a_ee[i];
		if (s[i] == 0)
		{
			cc[i] = 'Y';
		}
		else
		{
			cc[i] = 'N';
		}
	}
	printf("\n\nb.\n\n");
	printf("    e   t   s   c\n");
	for (i = 1; i <= active_num; i++)
	{
		printf("%-4d%-4d%-4d%-4d%-4c\n", i, a_ee[i], tt[i], s[i], cc[i]);
	}
	system("pause");
	return 0;
}