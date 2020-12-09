#include<bits/stdc++.h>
using namespace std;

int f[100000001];

int main()
{
	int n;
	scanf("%d",&n);
	int i=0,j=0;
	if(n==0) printf("1 0 0");
	if(n>0)
	{
		while(n>0)
	{
		j++;
		f[j]=n%10;
		n/=10;
		i++;
	}
	for(int a=1;a<=i;a++)
	{
		for(int b=1;b<=i-a;b++)
		{
			if(f[b]>f[b+1]) swap(f[b],f[b+1]);
		}
	}
	printf("%d %d %d",i,f[i],f[1]);
	}
	/*while(n>0)
	{
		j++;
		f[j]=n%10;
		n/=10;
		i++;
	}
	for(int a=1;a<=i;a++)
	{
		for(int b=1;b<=i-a;b++)
		{
			if(f[b]>f[b+1]) swap(f[b],f[b+1]);
		}
	}
	printf("%d %d %d",i,f[i],f[1]);*/
    return 0;
}
