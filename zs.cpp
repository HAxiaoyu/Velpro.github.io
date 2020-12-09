#include<bits/stdc++.h>
using namespace std;

int a[4];

int main()
{
	for(int i=1;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4-i;j++)
		{
			if(a[j]>a[j+1]) swap(a[j],a[j+1]); 
		}
	}
	for(int i=1;i<=4;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
