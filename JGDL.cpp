#include<bits/stdc++.h>
using namespace std;

int a=0;

int f(int x)
{	
	
	if(x==1) return a;
	if(x%2!=0)
	{
		a++;
		return f(3*x+1);
	}
	if(x%2==0)
	{
		a++;
		return f(x/2);
	}
	
}

int main()
{
	int n;
	scanf("%d",&n);
	int ans=f(n);
	printf("%d",ans);
	return 0;
}
