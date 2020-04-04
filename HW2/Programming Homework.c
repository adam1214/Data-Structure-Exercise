#include <stdio.h>
#include <stdlib.h>
#define MAX8 8
#define MAX7 7
#define MAX6 6
#define MAX5 5
#define MAX4 4
#define MAX3 3
#define MAX2 2
#define MAX1 1
int count(int i, int j,int num,int board[MAX8][MAX8])
{
	int count = 0;
	if (i - 2 >= 0 && i - 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i - 2][j + 1] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i - 1][j + 2] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i + 1][j + 2] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i + 2][j + 1] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i + 2][j - 1] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i + 1][j - 2] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i - 1][j - 2] == 0)
		count++;
	if (i - 2 >= 0 && i - 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i - 2][j - 1] == 0)
		count++;
	return count;
}
int count7(int i, int j, int num, int board[MAX7][MAX7])
{
	int count = 0;
	if (i - 2 >= 0 && i - 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i - 2][j + 1] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i - 1][j + 2] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i + 1][j + 2] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i + 2][j + 1] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i + 2][j - 1] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i + 1][j - 2] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i - 1][j - 2] == 0)
		count++;
	if (i - 2 >= 0 && i - 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i - 2][j - 1] == 0)
		count++;
	return count;
}
int count6(int i, int j, int num, int board[MAX6][MAX6])
{
	int count = 0;
	if (i - 2 >= 0 && i - 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i - 2][j + 1] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i - 1][j + 2] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i + 1][j + 2] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i + 2][j + 1] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i + 2][j - 1] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i + 1][j - 2] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i - 1][j - 2] == 0)
		count++;
	if (i - 2 >= 0 && i - 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i - 2][j - 1] == 0)
		count++;
	return count;
}
int count5(int i, int j, int num, int board[MAX5][MAX5])
{
	int count = 0;
	if (i - 2 >= 0 && i - 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i - 2][j + 1] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i - 1][j + 2] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i + 1][j + 2] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i + 2][j + 1] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i + 2][j - 1] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i + 1][j - 2] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i - 1][j - 2] == 0)
		count++;
	if (i - 2 >= 0 && i - 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i - 2][j - 1] == 0)
		count++;
	return count;
}
int count4(int i, int j, int num, int board[MAX4][MAX4])
{
	int count = 0;
	if (i - 2 >= 0 && i - 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i - 2][j + 1] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i - 1][j + 2] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i + 1][j + 2] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i + 2][j + 1] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i + 2][j - 1] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i + 1][j - 2] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i - 1][j - 2] == 0)
		count++;
	if (i - 2 >= 0 && i - 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i - 2][j - 1] == 0)
		count++;
	return count;
}
int count3(int i, int j, int num, int board[MAX3][MAX3])
{
	int count = 0;
	if (i - 2 >= 0 && i - 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i - 2][j + 1] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i - 1][j + 2] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i + 1][j + 2] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i + 2][j + 1] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i + 2][j - 1] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i + 1][j - 2] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i - 1][j - 2] == 0)
		count++;
	if (i - 2 >= 0 && i - 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i - 2][j - 1] == 0)
		count++;
	return count;
}
int count2(int i, int j, int num, int board[MAX2][MAX2])
{
	int count = 0;
	if (i - 2 >= 0 && i - 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i - 2][j + 1] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i - 1][j + 2] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i + 1][j + 2] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i + 2][j + 1] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i + 2][j - 1] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i + 1][j - 2] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i - 1][j - 2] == 0)
		count++;
	if (i - 2 >= 0 && i - 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i - 2][j - 1] == 0)
		count++;
	return count;
}
int count1(int i, int j, int num, int board[MAX1][MAX1])
{
	int count = 0;
	if (i - 2 >= 0 && i - 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i - 2][j + 1] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i - 1][j + 2] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j + 2 >= 0 && j + 2 <= num&& board[i + 1][j + 2] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j + 1 >= 0 && j + 1 <= num&& board[i + 2][j + 1] == 0)
		count++;
	if (i + 2 >= 0 && i + 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i + 2][j - 1] == 0)
		count++;
	if (i + 1 >= 0 && i + 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i + 1][j - 2] == 0)
		count++;
	if (i - 1 >= 0 && i - 1 <= num&&j - 2 >= 0 && j - 2 <= num&& board[i - 1][j - 2] == 0)
		count++;
	if (i - 2 >= 0 && i - 2 <= num&&j - 1 >= 0 && j - 1 <= num&& board[i - 2][j - 1] == 0)
		count++;
	return count;
}
void bubble(int a[])
{
	int i, j, temp;
	for (i = 1; i < 8 ; i++)
		for (j = 0; j < (8 - i); j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
}
int main(void)
{
	int i, j, k, board8[8][8], m,board7[7][7],board6[6][6],board5[5][5],board4[4][4],board3[3][3],board2[2][2],board1[1][1];
	int num[8],num1[8];
	/*下面是1*/
	m = 1;
	printf("1:\n");
	for (i = 0; i <= 0; i++)
	{
		for (j = 0; j <= 0; j++)
		{
			board1[i][j] = 0;
		}
	}
	board1[0][0] = m;
	i = 0;
	j = 0;
	for (m = 2; m <= 1 * 1; m++)
	{
		for (k = 0; k <= 7; k++)
		{
			num[k] = 10;
			num1[k] = 10;
		}
		if (board1[i - 2][j - 1] == 0 && i - 2 >= 0 && i - 2 <= 0 && j - 1 >= 0 && j - 1 <= 0)
		{
			num[0] = count1(i - 2, j - 1, 1 - 1, board1);
			num1[0] = count1(i - 2, j - 1, 1 - 1, board1);
		}
		if (board1[i - 2][j + 1] == 0 && i - 2 >= 0 && i - 2 <= 0 && j + 1 >= 0 && j + 1 <= 0)
		{
			num[1] = count1(i - 2, j + 1, 1 - 1, board1);
			num1[1] = count1(i - 2, j + 1, 1 - 1, board1);
		}
		if (board1[i - 1][j - 2] == 0 && i - 1 >= 0 && i - 1 <= 0 && j - 2 >= 0 && j - 2 <= 0)
		{
			num[2] = count1(i - 1, j - 2, 1 - 1, board1);
			num1[2] = count1(i - 1, j - 2, 1 - 1, board1);
		}
		if (board1[i - 1][j + 2] == 0 && i - 1 >= 0 && i - 1 <= 0 && j + 2 >= 0 && j + 2 <= 0)
		{
			num[3] = count1(i - 1, j + 2, 1 - 1, board1);
			num1[3] = count1(i - 1, j + 2, 1 - 1, board1);
		}
		if (board1[i + 1][j - 2] == 0 && i + 1 >= 0 && i + 1 <= 0 && j - 2 >= 0 && j - 2 <= 0)
		{
			num[4] = count1(i + 1, j - 2, 1 - 1, board1);
			num1[4] = count1(i + 1, j - 2, 1 - 1, board1);
		}
		if (board1[i + 1][j + 2] == 0 && i + 1 >= 0 && i + 1 <= 0 && j + 2 >= 0 && j + 2 <= 0)
		{
			num[5] = count1(i + 1, j + 2, 1 - 1, board1);
			num1[5] = count1(i + 1, j + 2, 1 - 1, board1);
		}
		if (board1[i + 2][j - 1] == 0 && i + 2 >= 0 && i + 2 <= 0 && j - 1 >= 0 && j - 1 <= 0)
		{
			num[6] = count1(i + 2, j - 1, 1 - 1, board1);
			num1[6] = count1(i + 2, j - 1, 1 - 1, board1);
		}
		if (board1[i + 2][j + 1] == 0 && i + 2 >= 0 && i + 2 <= 0 && j + 1 >= 0 && j + 1 <= 0)
		{
			num[7] = count1(i + 2, j + 1, 1 - 1, board1);
			num1[7] = count1(i + 2, j + 1, 1 - 1, board1);
		}
		if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
		{
			break;
		}
		bubble(num);
		if (num[0] == num1[0])
		{
			i = i - 2;
			j = j - 1;
			board1[i][j] = m;
			continue;
		}
		else if (num[0] == num1[1])
		{
			i = i - 2;
			j = j + 1;
			board1[i][j] = m;
			continue;
		}
		else if (num[0] == num1[2])
		{
			i = i - 1;
			j = j - 2;
			board1[i][j] = m;
			continue;
		}
		else if (num[0] == num1[3])
		{
			i = i - 1;
			j = j + 2;
			board1[i][j] = m;
			continue;
		}
		else if (num[0] == num1[4])
		{
			i = i + 1;
			j = j - 2;
			board1[i][j] = m;
			continue;
		}
		else if (num[0] == num1[5])
		{
			i = i + 1;
			j = j + 2;
			board1[i][j] = m;
			continue;
		}
		else if (num[0] == num1[6])
		{
			i = i + 2;
			j = j - 1;
			board1[i][j] = m;
			continue;
		}
		else if (num[0] == num1[7])
		{
			i = i + 2;
			j = j + 1;
			board1[i][j] = m;
			continue;
		}
	}
	if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
	{
		printf("no solution\n");
	}
	else
	{
		for (i = 0; i <= 0; i++)
		{
			for (j = 0; j <= 0; j++)
			{
				printf("%2d ", board1[i][j]);
			}
			printf("\n");
		}
	}
	/*下面是2*/
	m = 1;
	printf("\n2:\n");
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			board2[i][j] = 0;
		}
	}
	board2[0][0] = m;
	i = 0;
	j = 0;
	for (m = 2; m <= 2 * 2; m++)
	{
		for (k = 0; k <= 7; k++)
		{
			num[k] = 10;
			num1[k] = 10;
		}
		if (board2[i - 2][j - 1] == 0 && i - 2 >= 0 && i - 2 <= 1 && j - 1 >= 0 && j - 1 <= 1)
		{
			num[0] = count2(i - 2, j - 1, 2 - 1, board2);
			num1[0] = count2(i - 2, j - 1, 2 - 1, board2);
		}
		if (board2[i - 2][j + 1] == 0 && i - 2 >= 0 && i - 2 <= 1 && j + 1 >= 0 && j + 1 <= 1)
		{
			num[1] = count2(i - 2, j + 1, 2 - 1, board2);
			num1[1] = count2(i - 2, j + 1, 2 - 1, board2);
		}
		if (board2[i - 1][j - 2] == 0 && i - 1 >= 0 && i - 1 <= 1 && j - 2 >= 0 && j - 2 <= 1)
		{
			num[2] = count2(i - 1, j - 2, 2 - 1, board2);
			num1[2] = count2(i - 1, j - 2, 2 - 1, board2);
		}
		if (board2[i - 1][j + 2] == 0 && i - 1 >= 0 && i - 1 <= 1 && j + 2 >= 0 && j + 2 <= 1)
		{
			num[3] = count2(i - 1, j + 2, 2 - 1, board2);
			num1[3] = count2(i - 1, j + 2, 2 - 1, board2);
		}
		if (board2[i + 1][j - 2] == 0 && i + 1 >= 0 && i + 1 <= 1 && j - 2 >= 0 && j - 2 <= 1)
		{
			num[4] = count2(i + 1, j - 2, 2 - 1, board2);
			num1[4] = count2(i + 1, j - 2, 2 - 1, board2);
		}
		if (board2[i + 1][j + 2] == 0 && i + 1 >= 0 && i + 1 <= 1 && j + 2 >= 0 && j + 2 <= 1)
		{
			num[5] = count2(i + 1, j + 2, 2 - 1, board2);
			num1[5] = count2(i + 1, j + 2, 2 - 1, board2);
		}
		if (board2[i + 2][j - 1] == 0 && i + 2 >= 0 && i + 2 <= 1 && j - 1 >= 0 && j - 1 <= 1)
		{
			num[6] = count2(i + 2, j - 1, 2 - 1, board2);
			num1[6] = count2(i + 2, j - 1, 2 - 1, board2);
		}
		if (board2[i + 2][j + 1] == 0 && i + 2 >= 0 && i + 2 <= 1 && j + 1 >= 0 && j + 1 <= 1)
		{
			num[7] = count2(i + 2, j + 1, 2 - 1, board2);
			num1[7] = count2(i + 2, j + 1, 2 - 1, board2);
		}
		if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
		{
			break;
		}
		bubble(num);
		if (num[0] == num1[0])
		{
			i = i - 2;
			j = j - 1;
			board2[i][j] = m;
			continue;
		}
		else if (num[0] == num1[1])
		{
			i = i - 2;
			j = j + 1;
			board2[i][j] = m;
			continue;
		}
		else if (num[0] == num1[2])
		{
			i = i - 1;
			j = j - 2;
			board2[i][j] = m;
			continue;
		}
		else if (num[0] == num1[3])
		{
			i = i - 1;
			j = j + 2;
			board2[i][j] = m;
			continue;
		}
		else if (num[0] == num1[4])
		{
			i = i + 1;
			j = j - 2;
			board2[i][j] = m;
			continue;
		}
		else if (num[0] == num1[5])
		{
			i = i + 1;
			j = j + 2;
			board2[i][j] = m;
			continue;
		}
		else if (num[0] == num1[6])
		{
			i = i + 2;
			j = j - 1;
			board2[i][j] = m;
			continue;
		}
		else if (num[0] == num1[7])
		{
			i = i + 2;
			j = j + 1;
			board2[i][j] = m;
			continue;
		}
	}
	if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
	{
		printf("no solution\n");
	}
	else
	{
		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 1; j++)
			{
				printf("%2d ", board2[i][j]);
			}
			printf("\n");
		}
	}
	/*下面是3*/
	m = 1;
	printf("\n3:\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			board3[i][j] = 0;
		}
	}
	board3[0][0] = m;
	i = 0;
	j = 0;
	for (m = 2; m <= 3 * 3; m++)
	{
		for (k = 0; k <= 7; k++)
		{
			num[k] = 10;
			num1[k] = 10;
		}
		if (board3[i - 2][j - 1] == 0 && i - 2 >= 0 && i - 2 <= 2 && j - 1 >= 0 && j - 1 <= 2)
		{
			num[0] = count3(i - 2, j - 1, 3 - 1, board3);
			num1[0] = count3(i - 2, j - 1, 3 - 1, board3);
		}
		if (board3[i - 2][j + 1] == 0 && i - 2 >= 0 && i - 2 <= 2 && j + 1 >= 0 && j + 1 <= 2)
		{
			num[1] = count3(i - 2, j + 1, 3 - 1, board3);
			num1[1] = count3(i - 2, j + 1, 3 - 1, board3);
		}
		if (board3[i - 1][j - 2] == 0 && i - 1 >= 0 && i - 1 <= 2 && j - 2 >= 0 && j - 2 <= 2)
		{
			num[2] = count3(i - 1, j - 2, 3 - 1, board3);
			num1[2] = count3(i - 1, j - 2, 3 - 1, board3);
		}
		if (board3[i - 1][j + 2] == 0 && i - 1 >= 0 && i - 1 <= 2 && j + 2 >= 0 && j + 2 <= 2)
		{
			num[3] = count3(i - 1, j + 2, 3 - 1, board3);
			num1[3] = count3(i - 1, j + 2, 3 - 1, board3);
		}
		if (board3[i + 1][j - 2] == 0 && i + 1 >= 0 && i + 1 <= 2 && j - 2 >= 0 && j - 2 <= 2)
		{
			num[4] = count3(i + 1, j - 2, 3 - 1, board3);
			num1[4] = count3(i + 1, j - 2, 3 - 1, board3);
		}
		if (board3[i + 1][j + 2] == 0 && i + 1 >= 0 && i + 1 <= 2 && j + 2 >= 0 && j + 2 <= 2)
		{
			num[5] = count3(i + 1, j + 2, 3 - 1, board3);
			num1[5] = count3(i + 1, j + 2, 3 - 1, board3);
		}
		if (board3[i + 2][j - 1] == 0 && i + 2 >= 0 && i + 2 <= 2 && j - 1 >= 0 && j - 1 <= 2)
		{
			num[6] = count3(i + 2, j - 1, 3 - 1, board3);
			num1[6] = count3(i + 2, j - 1, 3 - 1, board3);
		}
		if (board3[i + 2][j + 1] == 0 && i + 2 >= 0 && i + 2 <= 2 && j + 1 >= 0 && j + 1 <= 2)
		{
			num[7] = count3(i + 2, j + 1, 3 - 1, board3);
			num1[7] = count3(i + 2, j + 1, 3 - 1, board3);
		}
		if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
		{
			break;
		}
		bubble(num);
		if (num[0] == num1[0])
		{
			i = i - 2;
			j = j - 1;
			board3[i][j] = m;
			continue;
		}
		else if (num[0] == num1[1])
		{
			i = i - 2;
			j = j + 1;
			board3[i][j] = m;
			continue;
		}
		else if (num[0] == num1[2])
		{
			i = i - 1;
			j = j - 2;
			board3[i][j] = m;
			continue;
		}
		else if (num[0] == num1[3])
		{
			i = i - 1;
			j = j + 2;
			board3[i][j] = m;
			continue;
		}
		else if (num[0] == num1[4])
		{
			i = i + 1;
			j = j - 2;
			board3[i][j] = m;
			continue;
		}
		else if (num[0] == num1[5])
		{
			i = i + 1;
			j = j + 2;
			board3[i][j] = m;
			continue;
		}
		else if (num[0] == num1[6])
		{
			i = i + 2;
			j = j - 1;
			board3[i][j] = m;
			continue;
		}
		else if (num[0] == num1[7])
		{
			i = i + 2;
			j = j + 1;
			board3[i][j] = m;
			continue;
		}
	}
	if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
	{
		printf("no solution\n");
	}
	else
	{
		for (i = 0; i <= 2; i++)
		{
			for (j = 0; j <= 2; j++)
			{
				printf("%2d ", board3[i][j]);
			}
			printf("\n");
		}
	}
	/*下面是4*/
	m = 1;
	printf("\n4:\n");
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			board4[i][j] = 0;
		}
	}
	board4[0][0] = m;
	i = 0;
	j = 0;
	for (m = 2; m <= 4 * 4; m++)
	{
		for (k = 0; k <= 7; k++)
		{
			num[k] = 10;
			num1[k] = 10;
		}
		if (board4[i - 2][j - 1] == 0 && i - 2 >= 0 && i - 2 <= 3 && j - 1 >= 0 && j - 1 <= 3)
		{
			num[0] = count4(i - 2, j - 1, 4 - 1, board4);
			num1[0] = count4(i - 2, j - 1, 4 - 1, board4);
		}
		if (board4[i - 2][j + 1] == 0 && i - 2 >= 0 && i - 2 <= 3 && j + 1 >= 0 && j + 1 <= 3)
		{
			num[1] = count4(i - 2, j + 1, 4 - 1, board4);
			num1[1] = count4(i - 2, j + 1, 4 - 1, board4);
		}
		if (board4[i - 1][j - 2] == 0 && i - 1 >= 0 && i - 1 <= 3 && j - 2 >= 0 && j - 2 <= 3)
		{
			num[2] = count4(i - 1, j - 2, 4 - 1, board4);
			num1[2] = count4(i - 1, j - 2, 4 - 1, board4);
		}
		if (board4[i - 1][j + 2] == 0 && i - 1 >= 0 && i - 1 <= 3 && j + 2 >= 0 && j + 2 <= 3)
		{
			num[3] = count4(i - 1, j + 2, 4 - 1, board4);
			num1[3] = count4(i - 1, j + 2, 4 - 1, board4);
		}
		if (board4[i + 1][j - 2] == 0 && i + 1 >= 0 && i + 1 <= 3 && j - 2 >= 0 && j - 2 <= 3)
		{
			num[4] = count4(i + 1, j - 2, 4 - 1, board4);
			num1[4] = count4(i + 1, j - 2, 4 - 1, board4);
		}
		if (board4[i + 1][j + 2] == 0 && i + 1 >= 0 && i + 1 <= 3 && j + 2 >= 0 && j + 2 <= 3)
		{
			num[5] = count4(i + 1, j + 2, 4 - 1, board4);
			num1[5] = count4(i + 1, j + 2, 4 - 1, board4);
		}
		if (board4[i + 2][j - 1] == 0 && i + 2 >= 0 && i + 2 <= 3 && j - 1 >= 0 && j - 1 <= 3)
		{
			num[6] = count4(i + 2, j - 1, 4 - 1, board4);
			num1[6] = count4(i + 2, j - 1, 4 - 1, board4);
		}
		if (board4[i + 2][j + 1] == 0 && i + 2 >= 0 && i + 2 <= 3 && j + 1 >= 0 && j + 1 <= 3)
		{
			num[7] = count4(i + 2, j + 1, 4 - 1, board4);
			num1[7] = count4(i + 2, j + 1, 4 - 1, board4);
		}
		if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
		{
			break;
		}
		bubble(num);
		if (num[0] == num1[0])
		{
			i = i - 2;
			j = j - 1;
			board4[i][j] = m;
			continue;
		}
		else if (num[0] == num1[1])
		{
			i = i - 2;
			j = j + 1;
			board4[i][j] = m;
			continue;
		}
		else if (num[0] == num1[2])
		{
			i = i - 1;
			j = j - 2;
			board4[i][j] = m;
			continue;
		}
		else if (num[0] == num1[3])
		{
			i = i - 1;
			j = j + 2;
			board4[i][j] = m;
			continue;
		}
		else if (num[0] == num1[4])
		{
			i = i + 1;
			j = j - 2;
			board4[i][j] = m;
			continue;
		}
		else if (num[0] == num1[5])
		{
			i = i + 1;
			j = j + 2;
			board4[i][j] = m;
			continue;
		}
		else if (num[0] == num1[6])
		{
			i = i + 2;
			j = j - 1;
			board4[i][j] = m;
			continue;
		}
		else if (num[0] == num1[7])
		{
			i = i + 2;
			j = j + 1;
			board4[i][j] = m;
			continue;
		}
	}
	if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
	{
		printf("no solution\n");
	}
	else
	{
		for (i = 0; i <= 3; i++)
		{
			for (j = 0; j <= 3; j++)
			{
				printf("%2d ", board4[i][j]);
			}
			printf("\n");
		}
	}
	/*下面是5*/
	m = 1;
	printf("\n5:\n");
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			board5[i][j] = 0;
		}
	}
	board5[0][0] = m;
	i = 0;
	j = 0;
	for (m = 2; m <= 5 * 5; m++)
	{
		for (k = 0; k <= 7; k++)
		{
			num[k] = 10;
			num1[k] = 10;
		}
		if (board5[i - 2][j - 1] == 0 && i - 2 >= 0 && i - 2 <= 4 && j - 1 >= 0 && j - 1 <= 4)
		{
			num[0] = count5(i - 2, j - 1, 5 - 1, board5);
			num1[0] = count5(i - 2, j - 1, 5 - 1, board5);
		}
		if (board5[i - 2][j + 1] == 0 && i - 2 >= 0 && i - 2 <= 4 && j + 1 >= 0 && j + 1 <= 4)
		{
			num[1] = count5(i - 2, j + 1, 5 - 1, board5);
			num1[1] = count5(i - 2, j + 1, 5 - 1, board5);
		}
		if (board5[i - 1][j - 2] == 0 && i - 1 >= 0 && i - 1 <= 4 && j - 2 >= 0 && j - 2 <= 4)
		{
			num[2] = count5(i - 1, j - 2, 5 - 1, board5);
			num1[2] = count5(i - 1, j - 2, 5 - 1, board5);
		}
		if (board5[i - 1][j + 2] == 0 && i - 1 >= 0 && i - 1 <= 4 && j + 2 >= 0 && j + 2 <= 4)
		{
			num[3] = count5(i - 1, j + 2, 5 - 1, board5);
			num1[3] = count5(i - 1, j + 2, 5 - 1, board5);
		}
		if (board5[i + 1][j - 2] == 0 && i + 1 >= 0 && i + 1 <= 4 && j - 2 >= 0 && j - 2 <= 4)
		{
			num[4] = count5(i + 1, j - 2, 5 - 1, board5);
			num1[4] = count5(i + 1, j - 2, 5 - 1, board5);
		}
		if (board5[i + 1][j + 2] == 0 && i + 1 >= 0 && i + 1 <= 4 && j + 2 >= 0 && j + 2 <= 4)
		{
			num[5] = count5(i + 1, j + 2, 5 - 1, board5);
			num1[5] = count5(i + 1, j + 2, 5 - 1, board5);
		}
		if (board5[i + 2][j - 1] == 0 && i + 2 >= 0 && i + 2 <= 4 && j - 1 >= 0 && j - 1 <= 4)
		{
			num[6] = count5(i + 2, j - 1, 5 - 1, board5);
			num1[6] = count5(i + 2, j - 1, 5 - 1, board5);
		}
		if (board5[i + 2][j + 1] == 0 && i + 2 >= 0 && i + 2 <= 4 && j + 1 >= 0 && j + 1 <= 4)
		{
			num[7] = count5(i + 2, j + 1, 5 - 1, board5);
			num1[7] = count5(i + 2, j + 1, 5 - 1, board5);
		}
		if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
		{
			break;
		}
		bubble(num);
		if (num[0] == num1[0])
		{
			i = i - 2;
			j = j - 1;
			board5[i][j] = m;
			continue;
		}
		else if (num[0] == num1[1])
		{
			i = i - 2;
			j = j + 1;
			board5[i][j] = m;
			continue;
		}
		else if (num[0] == num1[2])
		{
			i = i - 1;
			j = j - 2;
			board5[i][j] = m;
			continue;
		}
		else if (num[0] == num1[3])
		{
			i = i - 1;
			j = j + 2;
			board5[i][j] = m;
			continue;
		}
		else if (num[0] == num1[4])
		{
			i = i + 1;
			j = j - 2;
			board5[i][j] = m;
			continue;
		}
		else if (num[0] == num1[5])
		{
			i = i + 1;
			j = j + 2;
			board5[i][j] = m;
			continue;
		}
		else if (num[0] == num1[6])
		{
			i = i + 2;
			j = j - 1;
			board5[i][j] = m;
			continue;
		}
		else if (num[0] == num1[7])
		{
			i = i + 2;
			j = j + 1;
			board5[i][j] = m;
			continue;
		}
	}
	if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
	{
		printf("no solution\n");
	}
	else
	{
		for (i = 0; i <= 4; i++)
		{
			for (j = 0; j <= 4; j++)
			{
				printf("%2d ", board5[i][j]);
			}
			printf("\n");
		}
	}
	/*下面是6*/
	m = 1;
	printf("\n6:\n");
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			board6[i][j] = 0;
		}
	}
	board6[0][0] = m;
	i = 0;
	j = 0;
	for (m = 2; m <= 6 * 6; m++)
	{
		for (k = 0; k <= 7; k++)
		{
			num[k] = 10;
			num1[k] = 10;
		}
		if (board6[i - 2][j - 1] == 0 && i - 2 >= 0 && i - 2 <= 5 && j - 1 >= 0 && j - 1 <= 5)
		{
			num[0] = count6(i - 2, j - 1, 6 - 1, board6);
			num1[0] = count6(i - 2, j - 1, 6 - 1, board6);
		}
		if (board6[i - 2][j + 1] == 0 && i - 2 >= 0 && i - 2 <= 5 && j + 1 >= 0 && j + 1 <= 5)
		{
			num[1] = count6(i - 2, j + 1, 6 - 1, board6);
			num1[1] = count6(i - 2, j + 1, 6 - 1, board6);
		}
		if (board6[i - 1][j - 2] == 0 && i - 1 >= 0 && i - 1 <= 5 && j - 2 >= 0 && j - 2 <= 5)
		{
			num[2] = count6(i - 1, j - 2, 6 - 1, board6);
			num1[2] = count6(i - 1, j - 2, 6 - 1, board6);
		}
		if (board6[i - 1][j + 2] == 0 && i - 1 >= 0 && i - 1 <= 5 && j + 2 >= 0 && j + 2 <= 5)
		{
			num[3] = count6(i - 1, j + 2, 6 - 1, board6);
			num1[3] = count6(i - 1, j + 2, 6 - 1, board6);
		}
		if (board6[i + 1][j - 2] == 0 && i + 1 >= 0 && i + 1 <= 5 && j - 2 >= 0 && j - 2 <= 5)
		{
			num[4] = count6(i + 1, j - 2, 6 - 1, board6);
			num1[4] = count6(i + 1, j - 2, 6 - 1, board6);
		}
		if (board6[i + 1][j + 2] == 0 && i + 1 >= 0 && i + 1 <= 5 && j + 2 >= 0 && j + 2 <= 5)
		{
			num[5] = count6(i + 1, j + 2, 6 - 1, board6);
			num1[5] = count6(i + 1, j + 2, 6 - 1, board6);
		}
		if (board6[i + 2][j - 1] == 0 && i + 2 >= 0 && i + 2 <= 5 && j - 1 >= 0 && j - 1 <= 5)
		{
			num[6] = count6(i + 2, j - 1, 6 - 1, board6);
			num1[6] = count6(i + 2, j - 1, 6 - 1, board6);
		}
		if (board6[i + 2][j + 1] == 0 && i + 2 >= 0 && i + 2 <= 5 && j + 1 >= 0 && j + 1 <= 5)
		{
			num[7] = count6(i + 2, j + 1, 7 - 1, board6);
			num1[7] = count6(i + 2, j + 1, 7 - 1, board6);
		}
		if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
		{
			break;
		}
		bubble(num);
		if (num[0] == num1[0])
		{
			i = i - 2;
			j = j - 1;
			board6[i][j] = m;
			continue;
		}
		else if (num[0] == num1[1])
		{
			i = i - 2;
			j = j + 1;
			board6[i][j] = m;
			continue;
		}
		else if (num[0] == num1[2])
		{
			i = i - 1;
			j = j - 2;
			board6[i][j] = m;
			continue;
		}
		else if (num[0] == num1[3])
		{
			i = i - 1;
			j = j + 2;
			board6[i][j] = m;
			continue;
		}
		else if (num[0] == num1[4])
		{
			i = i + 1;
			j = j - 2;
			board6[i][j] = m;
			continue;
		}
		else if (num[0] == num1[5])
		{
			i = i + 1;
			j = j + 2;
			board6[i][j] = m;
			continue;
		}
		else if (num[0] == num1[6])
		{
			i = i + 2;
			j = j - 1;
			board6[i][j] = m;
			continue;
		}
		else if (num[0] == num1[7])
		{
			i = i + 2;
			j = j + 1;
			board6[i][j] = m;
			continue;
		}
	}
	if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
	{
		printf("no solution\n");
	}
	else
	{
		for (i = 0; i <= 5; i++)
		{
			for (j = 0; j <= 5; j++)
			{
				printf("%2d ", board6[i][j]);
			}
			printf("\n");
		}
	}
	/*下面是7*/
	m = 1;
	printf("\n7:\n");
	for (i = 0; i <= 6; i++)
	{
		for (j = 0; j <= 6; j++)
		{
			board7[i][j] = 0;
		}
	}
	board7[0][0] = m;
	i = 0;
	j = 0;
	for (m = 2; m <= 7 * 7; m++)
	{
		for (k = 0; k <= 7; k++)
		{
			num[k] = 10;
			num1[k] = 10;
		}
		if (board7[i - 2][j - 1] == 0 && i - 2 >= 0 && i - 2 <= 6 && j - 1 >= 0 && j - 1 <= 6)
		{
			num[0] = count7(i - 2, j - 1, 7 - 1, board7);
			num1[0] = count7(i - 2, j - 1, 7 - 1, board7);
		}
		if (board7[i - 2][j + 1] == 0 && i - 2 >= 0 && i - 2 <= 6 && j + 1 >= 0 && j + 1 <= 6)
		{
			num[1] = count7(i - 2, j + 1, 7 - 1, board7);
			num1[1] = count7(i - 2, j + 1, 7 - 1, board7);
		}
		if (board7[i - 1][j - 2] == 0 && i - 1 >= 0 && i - 1 <= 6 && j - 2 >= 0 && j - 2 <= 6)
		{
			num[2] = count7(i - 1, j - 2, 7 - 1, board7);
			num1[2] = count7(i - 1, j - 2, 7 - 1, board7);
		}
		if (board7[i - 1][j + 2] == 0 && i - 1 >= 0 && i - 1 <= 6 && j + 2 >= 0 && j + 2 <= 6)
		{
			num[3] = count7(i - 1, j + 2, 7 - 1, board7);
			num1[3] = count7(i - 1, j + 2, 7 - 1, board7);
		}
		if (board7[i + 1][j - 2] == 0 && i + 1 >= 0 && i + 1 <= 6 && j - 2 >= 0 && j - 2 <= 6)
		{
			num[4] = count7(i + 1, j - 2, 7 - 1, board7);
			num1[4] = count7(i + 1, j - 2, 7 - 1, board7);
		}
		if (board7[i + 1][j + 2] == 0 && i + 1 >= 0 && i + 1 <= 6 && j + 2 >= 0 && j + 2 <= 6)
		{
			num[5] = count7(i + 1, j + 2, 7 - 1, board7);
			num1[5] = count7(i + 1, j + 2, 7 - 1, board7);
		}
		if (board7[i + 2][j - 1] == 0 && i + 2 >= 0 && i + 2 <= 6 && j - 1 >= 0 && j - 1 <= 6)
		{
			num[6] = count7(i + 2, j - 1, 7 - 1, board7);
			num1[6] = count7(i + 2, j - 1, 7 - 1, board7);
		}
		if (board7[i + 2][j + 1] == 0 && i + 2 >= 0 && i + 2 <= 6 && j + 1 >= 0 && j + 1 <= 6)
		{
			num[7] = count7(i + 2, j + 1, 7 - 1, board7);
			num1[7] = count7(i + 2, j + 1, 7 - 1, board7);
		}
		if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
		{
			break;
		}
		bubble(num);
		if (num[0] == num1[0])
		{
			i = i - 2;
			j = j - 1;
			board7[i][j] = m;
			continue;
		}
		else if (num[0] == num1[1])
		{
			i = i - 2;
			j = j + 1;
			board7[i][j] = m;
			continue;
		}
		else if (num[0] == num1[2])
		{
			i = i - 1;
			j = j - 2;
			board7[i][j] = m;
			continue;
		}
		else if (num[0] == num1[3])
		{
			i = i - 1;
			j = j + 2;
			board7[i][j] = m;
			continue;
		}
		else if (num[0] == num1[4])
		{
			i = i + 1;
			j = j - 2;
			board7[i][j] = m;
			continue;
		}
		else if (num[0] == num1[5])
		{
			i = i + 1;
			j = j + 2;
			board7[i][j] = m;
			continue;
		}
		else if (num[0] == num1[6])
		{
			i = i + 2;
			j = j - 1;
			board7[i][j] = m;
			continue;
		}
		else if (num[0] == num1[7])
		{
			i = i + 2;
			j = j + 1;
			board7[i][j] = m;
			continue;
		}
	}
	if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
	{
		printf("no solution\n");
	}
	else
	{
		for (i = 0; i <= 6; i++)
		{
			for (j = 0; j <= 6; j++)
			{
				printf("%2d ", board7[i][j]);
			}
			printf("\n");
		}
	}
	/*下面是8*/
	m = 1;
	printf("\n8:\n");
	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			board8[i][j] = 0;
		}
	}
	board8[0][0] = m;
	i = 0;
	j = 0;
	for (m = 2; m <= 8 * 8; m++)
	{
		for (k = 0; k <= 7; k++)
		{
			num[k] = 10;
			num1[k] = 10;
		}
		if (board8[i - 2][j + 1] == 0 && i - 2 >= 0 && i - 2 <= 7 && j + 1 >= 0 && j + 1 <= 7)
		{
			num[0] = count(i - 2, j + 1, 8 - 1, board8);
			num1[0] = count(i - 2, j + 1, 8-1, board8);
		}
		if (board8[i - 1][j + 2] == 0 && i - 1 >= 0 && i - 1 <= 7 && j + 2 >= 0 && j + 2 <= 7)
		{
			num[1] = count(i - 1, j + 2, 8 - 1, board8);
			num1[1] = count(i - 1, j + 2, 8-1, board8);
		}
		if (board8[i + 1][j + 2] == 0 && i + 1 >= 0 && i + 1 <= 7 && j + 2 >= 0 && j + 2 <= 7)
		{
			num[2] = count(i + 1, j + 2, 8 - 1, board8);
			num1[2] = count(i + 1, j + 2, 8-1, board8);
		}
		if (board8[i + 2][j + 1] == 0 && i + 2 >= 0 && i + 2 <= 7 && j + 1 >= 0 && j + 1 <= 7)
		{
			num[3] = count(i + 2, j + 1, 8 - 1, board8);
			num1[3] = count(i + 2, j + 1, 8-1, board8);
		}
		if (board8[i + 2][j - 1] == 0 && i + 2 >= 0 && i + 2 <= 7 && j - 1 >= 0 && j - 1 <= 7)
		{
			num[4] = count(i + 2, j - 1, 8 - 1, board8);
			num1[4] = count(i + 2, j - 1, 8-1, board8);
		}
		if (board8[i + 1][j - 2] == 0 && i + 1 >= 0 && i + 1 <= 7 && j - 2 >= 0 && j - 2 <= 7)
		{
			num[5] = count(i + 1, j - 2, 8 - 1, board8);
			num1[5] = count(i + 1, j - 2, 8-1, board8);
		}
		if (board8[i - 1][j - 2] == 0 && i - 1 >= 0 && i - 1 <= 7 && j - 2 >= 0 && j - 2 <= 7)
		{
			num[6] = count(i - 1, j - 2, 8 - 1, board8);
			num1[6] = count(i - 1, j - 2, 8-1, board8);
		}
		if (board8[i - 2][j - 1] == 0 && i - 2 >= 0 && i - 2 <= 7 && j - 1 >= 0 && j - 1 <= 7)
		{
			num[7] = count(i - 2, j - 1, 8 - 1, board8);
			num1[7] = count(i - 2, j - 1, 8-1, board8);
		}
		if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
		{
			break;
		}
		bubble(num);
		if (num[0] == num1[0])
		{
			i = i - 2;
			j = j + 1;
			board8[i][j] = m;
			continue;
		}
		else if (num[0] == num1[1])
		{
			i = i - 1;
			j = j + 2;
			board8[i][j] = m;
			continue;
		}
		else if (num[0] == num1[2])
		{
			i = i + 1;
			j = j + 2;
			board8[i][j] = m;
			continue;
		}
		else if (num[0] == num1[3])
		{
			i = i + 2;
			j = j + 1;
			board8[i][j] = m;
			continue;
		}
		else if (num[0] == num1[4])
		{
			i = i + 2;
			j = j - 1;
			board8[i][j] = m;
			continue;
		}
		else if (num[0] == num1[5])
		{
			i = i + 1;
			j = j - 2;
			board8[i][j] = m;
			continue;
		}
		else if (num[0] == num1[6])
		{
			i = i - 1;
			j = j - 2;
			board8[i][j] = m;
			continue;
		}
		else if (num[0] == num1[7])
		{
			i = i - 2;
			j = j - 1;
			board8[i][j] = m;
			continue;
		}
	}
	if (num[0] == num[1] && num[1] == num[2] && num[2] == num[3] && num[3] == num[4] && num[4] == num[5] && num[5] == num[6] && num[6] == num[7] && num[7] == 10)
	{
		printf("no solution\n");
	}
	else
	{
		for (i = 0; i <= 7; i++)
		{
			for (j = 0; j <= 7; j++)
			{
				printf("%2d ", board8[i][j]);
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}