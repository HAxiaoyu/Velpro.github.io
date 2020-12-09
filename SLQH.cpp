#include<bits/stdc++.h>
using namespace std;

long long f[10001];
long long h[10001];

int b(long long x)
{
	if(x==1) return f[x]=1;
	if(x==2) return f[x]=2;
	if(f[x]==0) return f[x]=b(x-1)+b(x-2);
	return f[x];
}

int a(long long x)
{
	if(x==1) return h[x]=2;
	if(x==2) return h[x]=3;
	if(h[x]==0) return h[x]=a(x-1)+a(x-2);
	return h[x];
}

int main()
{
	int n;
	scanf("%d",&n);
	double ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=(double)a(i)/b(i);
	}
	printf("%.2lf",ans);
	return 0;
}
