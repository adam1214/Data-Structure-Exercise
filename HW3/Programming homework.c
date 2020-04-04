#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK 100*100
#define N 100
#define M 100
typedef struct {
	int vert;
	int horiz;
}offsets;
offsets move[8] = { { -1,0 },{ -1,1 },{ 0,1 },{ 1,1 },{ 1,0 },{ 1,-1 },{ 0,-1 },{ -1,-1 } };
typedef struct {
	int row;
	int col;
	int dir;
}element;
element stack[MAX_STACK];
int top = -1;
void stackFull()
{
	fprintf(stderr, "堆疊已滿，不能再加入元素");
	exit(EXIT_FAILURE);
}
void stackEmpty()
{
	fprintf(stderr, "堆疊已空，不能再取出元素");
	exit(EXIT_FAILURE);
}
void push(element a)
{
	if (top >= MAX_STACK - 1)
	{
		return stackFull();
	}
	stack[++top] = a;
}
element pop()
{
	if (top == -1)
	{
		stackEmpty();
	}
	return stack[top--];
}
int main(void)
{
	int n, m, i, j, con = 0, if_found = 0, now_row, now_col, dir, next_row, next_col;
	int mark[N][M] = { 0 };
	char maze[N][M];
	element position;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf(" %c", &maze[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (maze[i][j] == 's')
			{
				con = 1;
				break;
			}
		}
		if (con == 1)
			break;

	}
	int start_i = i;
	int start_j = j;
	con = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (maze[i][j] == 'd')
			{
				con = 1;
				break;
			}
		}
		if (con == 1)
			break;
	}
	int end_i = i;
	int end_j = j;
	//找起點終點到此結束 開始堆疊動作
	mark[start_i][start_j] = 1;
	top = 0;
	stack[0].row = start_i;
	stack[0].col = start_j;
	stack[0].dir = 0;
	while (top > -1 && if_found == 0)
	{
		position = pop();
		now_row = position.row;
		now_col = position.col;
		dir = position.dir;
		while (dir < 8 && if_found == 0)
		{
			next_row = now_row + move[dir].vert;
			next_col = now_col + move[dir].horiz;
			if (next_row == end_i&&next_col == end_j)
			{
				if_found = 1;
			}
			else if (maze[next_row][next_col] =='0'&& mark[next_row][next_col] ==0&& next_row >= 0 && next_col >= 0 && next_row < n && next_col < m)
			{
				mark[next_row][next_col] = 1;
				position.row = now_row;  
				position.col = now_col;   
				position.dir = dir;
				push(position);
				now_row = next_row;
				now_col = next_col;
				dir = 0;
			}
			else
			{
				dir = dir + 1;
			}
		}
	}
	if (if_found == 0)
	{
		printf("No route\n");
	}
	else
	{
		for (i = 0; i <= top; i++)
		{
			maze[stack[i].row][stack[i].col] = '*';
		}
		maze[now_row][now_col] = '*';
		maze[start_i][start_j] = 's';
		maze[end_i][end_j] = 'd';
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				printf("%c", maze[i][j]);
			}
			printf("\n");
		}
		printf("%dsteps", top + 3);
	}
	system("pause");
	return 0;
}