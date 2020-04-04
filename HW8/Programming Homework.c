#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int temp = -1;
void re_allcosts(int distance[MAX][MAX], int n, int start, int end,int cost[MAX][MAX],int distance1[MAX][MAX])
{
	if (cost[start][end] == 1000 || distance1[start][end] != cost[start][end])
	{
		int i, j, k;
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				for (k = 0; k < n; k++)
				{
					if (distance[i][k] + distance[k][j] < distance[i][j])
					{
						distance[i][j] = distance[i][k] + distance[k][j];
						if (i == start&&j == end)
						{
							temp = k;
						}
					}
				}
		//遞迴之前 初始化distance
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				distance[i][j] = cost[i][j];
			}
		}
		int mid = temp;
		re_allcosts(distance, n, start, temp, cost, distance1);
		printf("%d->", mid);
	}	
	else
	{
		return 0;
	}
}
void allcosts(int cost[MAX][MAX], int distance[MAX][MAX], int n)
{
	int distance1[MAX][MAX], path[MAX];
	int i, j, k, start, end;
	scanf("%d %d", &start, &end);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			distance1[i][j] = distance[i][j];
			distance[i][j] = cost[i][j];
			distance1[i][j] = cost[i][j];
		}
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
			{
				if (distance1[i][k] + distance1[k][j] < distance1[i][j])
				{
					distance1[i][j] = distance1[i][k] + distance1[k][j];
				}
			}
	if (distance1[start][end] != 1000)
	{
		printf("Distance : %d\n", distance1[start][end]);
		printf("The route for the shortest path : ");
		printf("%d->", start);
		re_allcosts(distance, n, start, end, cost,distance1); //開始做遞迴
		printf("%d\n", end);
	}
	else
	{
		printf("No solution\n");
	}
}
int main(void)
{
	int cost[MAX][MAX], i, j, distance[MAX][MAX];
	for(i=0;i<MAX;i++)
		for (j = 0; j < MAX; j++)
		{
			cost[i][j] = 1000;
			distance[i][j] = 1000;
		}
	cost[0][1] = 5;
	cost[0][2] = 4;
	cost[0][3] = 2;
	cost[3][2] = 1;
	cost[2][1] = 1;
	cost[1][4] = 3;
	cost[2][4] = 2;
	cost[2][5] = 8;
	cost[3][5] = 7;
	cost[4][6] = 7;
	cost[4][8] = 15;
	cost[4][7] = 10;
	cost[5][7] = 3;
	cost[6][8] = 6;
	cost[7][8] = 5;
	allcosts(cost, distance, MAX);
	system("pause");
	return 0;
}