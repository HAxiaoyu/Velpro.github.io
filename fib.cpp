#include<bits/stdc++.h>
using namespace std;

long long f[10001];

int prime(int n)
{
	int i;
	if (n < 2) {
		return 0;
	}
	else {
		for (i = 2; i <n; i++)
		{
			if (n%i == 0)
				break;
		}
		if (i<n)
		{
			return 0;
		}
		else
			return 1;	
	}
	return 0;
}


int fib(long long x)
{
	if(x==1||x==2) return f[x]=1;
	if(f[x]==0) return f[x]=fib(x-1)+fib(x-2);
	return f[x];
}

int main()
{
	int n;
	scanf("%d",&n);
	if(prime(fib(n))) printf("yes");
	else printf("%d",f[n]);
	return 0;
}
