#include<bits/stdc++.h>
using namespace std;

int a[10001];

int hw(int x)
{
	int y=0;
	int sum=x;
	while(x>0)
	{
		y=y*10+x%10;
		x=x/10;
	}
	if(y==sum) return 1;
	else return 0;
}

int main()
{
	int n;
	int k=1;
	int ans=0;
	scanf("%d",&n);
	//if(n==0) printf("0");
	if(hw(n))
	{
		while(n>0)
		{
			ans+=n%10;
			n/=10;
		}
		printf("%d",ans);
	}
	else printf("no");
	return 0;
}
