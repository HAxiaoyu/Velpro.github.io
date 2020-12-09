#include<bits/stdc++.h>
using namespace std;

int a[10001];

int main()
{
	int n;
	int t=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//ÅÅÐò
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]) swap(a[j],a[j+1]); 
		}
	}
	for(int i=0;i<n-2;i++)
	{
		if(a[i+1]==(a[i]+a[i+2])/2) t=1;
	}
	if(t==1) printf("%d",a[1]-a[0]);
	else printf("no");
	return 0;
}
