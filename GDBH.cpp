#include<bits/stdc++.h>
using namespace std;

int i;

int f(int x)
{
	for(i=2;i<x;i++)
	{
		if(x%i==0) return 0;
		break;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(f(i)&&f(n-i)) break;
	}
	printf("%d %d",i,n-i);
	return 0;
}
