#include<bits/stdc++.h>
using namespace std;

int a[100001]; 

int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=(n*n*n)/2;i+=2)
	{
		if(i==n*n-n+1) break;
	}
	sum=i;
	while(sum<=n*n*n)
	{
		printf("%d ",i);
		i+=2;
		sum+=i;
	}
	return 0;
}
