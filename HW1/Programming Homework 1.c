#include<stdio.h>
#include<stdlib.h>
int Fac(int m)
{
	if (m > 0)
	{
		return(m*Fac(m - 1));
	}
	else
	{
		return 1;
	}
}
int main(void)
{
	int n, k;
	do
	{
		scanf("%d %d", &n, &k);
	} while (n < k||n < 0 || k < 0);
	printf("%d\n", Fac(n) / Fac(k) / Fac(n - k));
	system("pause");
	return 0;
}

