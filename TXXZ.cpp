#include<bits/stdc++.h>
using namespace std;

int a[101][101];
int b[10001];
int c[101][101];

int main()
{
	int n,m,i,j;
	int d=0,k=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(j=0;j<m;j++)
		for(i=n-1;i>=0;i--)
		{
			b[d++]=a[i][j];
		}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=b[k++];
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
	return 0;
} 
