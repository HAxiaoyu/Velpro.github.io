#include<bits/stdc++.h>
using namespace std;

int a[100001];

int main()
{
	int n,ans;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
	}
	printf("%.2f",(float)sum/n);
	return 0;
}
