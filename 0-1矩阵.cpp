#include<bits/stdc++.h>
using namespace std;

int a[101][101];

int main()
{
	int m,n,i,j;
	int b,c,d,e;
	scanf("%d%d",&m,&n);
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[j][i]);
		}
	}
	for(j=0;j<m;j++)
	{
		for(i=0,b=0,e=0,c=0;i<n;i++)
		{
			if(a[j][i]==1)
				b++;
			if(a[j][i]==0&&b>c)
			{
				c=b;
				d=i-1;
				b=0;
			}
			if(i==n-1&&a[j][i]==1&&b>c)
			{
				c=b;
				d=i;
				b=0;
			}
			if(a[j][i]==0)
				e++;
		}
		if(e==n)
			printf("%d %d\n",-1,-1);
		else
			printf("%d %d\n",d-c+1,d);
	}
	return 0;
}

