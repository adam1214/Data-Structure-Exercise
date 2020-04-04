#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int parent[MAX];
void heightunion(int i, int j)
{
	int root_i, root_j;
	//先判斷i j是不是本來就在同一聯集中
	for (root_i = i; parent[root_i] >= 0; root_i = parent[root_i]);
	for (root_j = j; parent[root_j] >= 0; root_j = parent[root_j]);
	if (root_i == root_j)
	{
		return; //表示i j 同樹根，跳脫函數
	}
	if (parent[root_i] > parent[root_j])
	{
		parent[root_i] = root_j; //j成為新的根
	}
	if (parent[root_i] < parent[root_j])
	{
		parent[root_j] = root_i; //i成為新的根
	}
	if (parent[root_i] == parent[root_j]) //兩樹高相等時
	{
		parent[root_j] = root_i; //i成為新的根
		parent[root_i] = parent[root_i] - 1;
	}
}
int main(void)
{
	int i, count;
	for (i = 0; i <= 99; i++)
	{
		parent[i] = -1;
	}
	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		heightunion(0, i + 1);
	}
	printf("Node     parent\n"); //空五格
	for (i = 0; i < count; i++)
	{
		printf("%d        ", i);
		if (parent[i] < 0)
		{
			printf("root\n");
		}
		else
		{
			printf("%d\n", parent[i]);
		}
	}
	system("pause");
	return 0;
}