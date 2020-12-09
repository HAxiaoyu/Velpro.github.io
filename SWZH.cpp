#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,s=0;
	scanf("%d",&n);
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
	}
	printf("%d\n",s);
	return 0;
}
