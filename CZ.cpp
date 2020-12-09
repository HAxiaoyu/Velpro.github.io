#include<bits/stdc++.h>
using namespace std;

int a[10001];

int main()
{
	int n,k;
	int t=0;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("%d ",i);
			t=1;
		}
	}
	if(t==0) printf("-1");
	return 0;
}
