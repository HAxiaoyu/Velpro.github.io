#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,j=1,k=1;
	int a[1001],b[1001],c[1001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)  b[j++]=a[i];//Å¼Êý
		else c[k++]=a[i];//ÆæÊý
	}
	//Å¼ÊýÅÅÐò
	for(int i=1;i<j;i++)
	{
		for(int m=1;m<j-i;m++)
		{
			if(b[m]<b[m+1])
			{
				int t=b[m];b[m]=b[m+1];b[m+1]=t;
			}
		}
	}
	//ÆæÊýÅÅÐò
	for(int i=1;i<k;i++)
	{
		for(int m=1;m<=k-i;m++)
		{
			if(c[m]<c[m+1])
			{
				int t=c[m];c[m]=c[m+1];c[m+1]=t;
			}
		}
	}
	for(int i=1;i<j;i++)
		printf("%d ",b[i]);
	for(int i=1;i<k;i++)
		printf("%d ",c[i]);
	return 0;
}
