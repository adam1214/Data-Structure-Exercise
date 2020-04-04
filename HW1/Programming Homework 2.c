#include<stdio.h>
#include<stdlib.h>
void honi(int n, char start, char temp, char end)
{
	if (n > 0)
	{
		honi(n - 1, start, end, temp);
		printf("Move disk %d from %c to %c\n", n, start, end);
		honi(n - 1, temp, start, end);
	}
}
int main(void)
{
	int num, i, a=1;
	char tower1='A', tower2='B', tower3='C';
	do
	{
		printf("Disk:");
		scanf("%d", &num);
	} while (num < 3 || num > 64);
	honi(num, tower1, tower2, tower3);
	for (i = num; i > 0; i--)
	{
		a = a * 2;
	}
	printf("Total steps:%d\n",a-1);
	system("pause");
	return 0;
}