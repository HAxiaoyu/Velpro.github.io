#include<bits/stdc++.h>
using namespace std;

int tow(char c,int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("%c ",c);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	char c;
	scanf("%c %d",&c,&n);
	tow(c,n);
	return 0;
}
