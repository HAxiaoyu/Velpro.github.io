#include<bits/stdc++.h>
using namespace std;

int f(int a,int b)
{
	if(a>b) return a;
	else return b;
}

int g(int a,int b)
{
	if(a<b) return a;
	else return b;
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int ans=f(a,b);
	int x=g(a,b);
	printf("%d %d",ans%10,x*x);
	return 0;
}
