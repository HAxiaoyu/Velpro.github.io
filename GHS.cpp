#include<bits/stdc++.h>
using namespace std;

int f[100001];

int ghs(int x)
{
	if(x==(x%10)*(x%10)*(x%10)+((x/10)%10)*((x/10)%10)*((x/10)%10)+((x/100)%10)*((x/100)%10)*((x/100)%10))
		return x;
}

int main()
{
	for(int i=100;i<10000;i++)
	{
		if(ghs(i)) printf("%d ",ghs(i));
	}
	
	return 0;
}
