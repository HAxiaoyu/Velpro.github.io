#include<bits/stdc++.h>
using namespace std;

int ans;

int add(int n)
{
	ans=0;
	while(n>0)
	{
		ans+=n%10;
		n/=10;
	}
	return ans;
}

int f(int n)
{
	if(n<10) return n;
	else return f(add(n));
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}
