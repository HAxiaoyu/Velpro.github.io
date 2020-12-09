#include<bits/stdc++.h>
using namespace std;

int m[10001];

int main()
{
	int n,a=0,b=0,c=0,d=0,e=0,f=0;
	int s=0;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&m[i]);
	}
	for(int i=1;i<=n;i++)
	{
		s=s+m[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(m[i]>=0&&m[i]<=50) a++;
		if(m[i]>=51&&m[i]<=100) b++;
		if(m[i]>=101&&m[i]<=150) c++;
		if(m[i]>=151&&m[i]<=200) d++;
		if(m[i]>=201&&m[i]<=300) e++;
		if(m[i]>300) f++;
	}
	printf("%.2f\n",(float)s/n);
	printf("%d %d %d %d %d %d",a,b,c,d,e,f);
	return 0;
} 
