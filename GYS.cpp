#include<stdio.h>

int main()
{
	int m,n,c,x,y;
	scanf("%d %d",&m,&n);
	if(m<n)
	{
		c=m;
		m=n;
		n=c;
	}
	x=m*n;
	y=m%n;
	while(y!=0)
	{
		m=n;
		n=y;
		y=m%n;
	}
	printf("%d %d",n,x/n);
	return 0;
} 
