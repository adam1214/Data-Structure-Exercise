#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int parent[MAX];
void heightunion(int i, int j)
{
	int root_i, root_j;
	//���P�_i j�O���O���ӴN�b�P�@�p����
	for (root_i = i; parent[root_i] >= 0; root_i = parent[root_i]);
	for (root_j = j; parent[root_j] >= 0; root_j = parent[root_j]);
	if (root_i == root_j)
	{
		return; //���i j �P��ڡA������
	}
	if (parent[root_i] > parent[root_j])
	{
		parent[root_i] = root_j; //j�����s����
	}
	if (parent[root_i] < parent[root_j])
	{
		parent[root_j] = root_i; //i�����s����
	}
	if (parent[root_i] == parent[root_j]) //��𰪬۵���
	{
		parent[root_j] = root_i; //i�����s����
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
	printf("Node     parent\n"); //�Ť���
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