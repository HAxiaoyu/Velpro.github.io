#pragma warning(disable:4996)
#include<stdio.h>
#define N 20
int main()
{
	int data[N][N],a[N];
	int n, sum1,sum2,sum3, temp;
	int k;
	while(scanf("%d", &n) != EOF)
	{
		k = 0;
		sum3 = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &data[i][j]);
		for (int i = 0; i < n; i++)
		{
			sum1 = 0;
			sum2 = 0;
			for (int j = 0; j < n; j++)
			{
				if (i == j)
					sum3 += data[i][j]; //用sum3记录对角线元素的和
				    sum1 += data[i][j]; //用sum1记录每一行元素的和
				    sum2 += data[j][i]; //用sum2记录每一列元素的和
			}
			a[k++] = sum1;
			a[k++] = sum2;
		}
		a[k++] = sum3;
		for (int i = 0; i < k; i++)      //冒泡排序
			for (int j = 0; j < k - 1 - i; j++)
			{
				if (a[j] < a[j + 1])
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
 
			}
		for (int i = 0; i < k; i++)
			printf("%d ",a[i]);
		printf("\n");
		
	}
	return 0;
}

